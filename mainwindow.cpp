#include "mainwindow.h"
#include "pokedexclass.h"
#include "pokemon.h"
#include "pokemoncreate.h"
#include "ui_mainwindow.h"
//#include <QTableView>
#include <QAbstractItemModel>
#include <QAbstractTableModel>
#include <QModelIndex>
#include <QVariant>
#include <QObject>
#include <QTableView>
#include <QDebug>
#include "typecreate.h"
#include "details.h"
#include <QFile>
#include <QFileDialog>
#include <QStringList>
#include <QByteArray>
#include <QMessageBox>
#include "infocreate.h"
#include "attaquecreate.h"
#include "effetcreate.h"
#include "keyenterreceiver.h"

//Mainwindow gérant le pokédex et le jeu

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),pokedex(new PokedexClass(QList<Pokemon> (), QList<InfoPokemon> (), QList<Type>(), QList<Attaque> (), QList<Effet> ())), game(new GameClass(QList<Pokemon> (), QList<InfoPokemon> (), QList<Type> ()))
{
    ui->setupUi(this);

    //On crée et on remplit la liste des pokémon de la première génération
    QList<Pokemon> listePoke;
    PokemonCreate pok;
    pok.createListPokemon(listePoke);

    //On crée et on remplit la liste des informations détaillées liées aux pokémon précédents
    QList<InfoPokemon> listeInfo;
    InfoCreate inf;
    inf.createListInfo(listeInfo);

    //On crée et on remplit la liste des types pour ces pokémon
    QList<Type> listeType;
    typeCreate typ;
    typ.createListType(listeType);

    //On crée et on remplit la liste des attaques pour ces pokémon
    QList<Attaque> listAttaque;
    AttaqueCreate att;
    att.createListAttaque(listAttaque);

    //On crée et on remplit la liste des effets pour ces pokémon
    QList<Effet> listEffet;
    EffetCreate eff;
    eff.createListEffet(listEffet);

    //On set les listes du pokédex avec les nouvelles listes
    pokedex->setList(listePoke);
    pokedex->setListInfo(listeInfo);
    pokedex->setListType(listeType);
    pokedex->setListAttaque(listAttaque);
    pokedex->setListEffet(listEffet);

    //De même avec le jeu
    game->setList(listePoke);
    game->setListInfo(listeInfo);
    game->setListType(listeType);

    //Affichage par défaut du LCDNumber
    ui->lcdNumber->display("20:00");

    //Les pokémon du pokédex sont triés dans l'ordre alphabétique
    pokedex->tri(listePoke, 1, 0);
    pokedex->setList(listePoke);


    keyEnterReceiver* key = new keyEnterReceiver();

    //Tous les connects nécessaires
    QObject::connect(this, SIGNAL(monSignal5()),this,SLOT(tri_set_num())); //bouton du pokédex pour le trier par ordre des IdNum des pokémon
    QObject::connect(this, SIGNAL(monSignal4()),this,SLOT(tri_set_alpha())); //bouton du pokédex pour le trier par ordre alphabétique
    QObject::connect(this, SIGNAL(dirty()), pokedex, SLOT(onDirty())); //permet le rafraichissement de l'affichage du pokédex après un tri
    QObject::connect(this, SIGNAL(signalDetails(const QModelIndex)), this, SLOT(openDetails(const QModelIndex))); //fait apparaitre la vue détaillée d'un pokémon au click sur une cellule
    QObject::connect(this, SIGNAL(monSignal6(QString)), this, SLOT(submitted(QString))); //bouton de soumission d'une proposition par le joueur
    QObject::connect(this, SIGNAL(dirty()), game, SLOT(onDirty())); //permet le rafraichissement de l'affichage du jeu après avoir ajouté un pokémon ou avoir trié le jeu
    QObject::connect(this, SIGNAL(monSignal7()),this,SLOT(tri_set_num_game())); //bouton de tri numérique du jeu
    QObject::connect(this, SIGNAL(monSignal8()),this,SLOT(tri_set_alpha_game())); //bouton de tri alphabétique du jeu
    QObject::connect(game->getTimer(), SIGNAL(timeout()), game, SLOT(updateTime())); //à chaque seconde apelle la fonction de mise à jour de la timevalue du jeu
    QObject::connect(game->getTimer(), SIGNAL(timeout()), this, SLOT(updateLCD())); //à chaque seconde rafraichit l'affichage du LCDNumber
    QObject::connect(this, SIGNAL(timerStart()), game, SLOT(startTimer())); //permet d'appeler le lancement du timer du jeu
    QObject::connect(this, SIGNAL(toExport()), this, SLOT(exportcsv())); //permet l'export vers des fichiers CSV
    QObject::connect(this, SIGNAL(toImport()), this, SLOT(importcsv())); //permet l'import depuis des fichiers CSV
    QObject::connect(key, SIGNAL(keyPressed()), this, SLOT(onKeyPressed()));



    //Mise en place de l'ui
    ui->tableView->setModel(pokedex);
    ui->tableView->show();
    ui->tableView_3->setModel(game);
    ui->tableView_3->show();
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->verticalHeader()->hide();
    ui->tableView_3->horizontalHeader()->hide();
    ui->tableView_3->verticalHeader()->hide();



    ui->lineEdit->installEventFilter(key);



}


MainWindow::~MainWindow()
{
    delete ui;
}

//Tri numérique du pokédex

void MainWindow::tri_set_num()
{

    QList<Pokemon> list;
    list = pokedex->getList();
    pokedex->tri(list,0,0);
    pokedex->setList(list);
    pokedex->setTri(0); //tri num
    emit dirty();

}

//Tri alphabétique du pokédex

void MainWindow::tri_set_alpha()
{
    QList<Pokemon> list;
    list = pokedex->getList();
    pokedex->tri(list,1,0);
    pokedex->setList(list);
    pokedex->setTri(1); //tri alpha
    emit dirty();

}

//Getter du pokédex

PokedexClass* MainWindow::getPokedex()
{
    return pokedex;
}

//Setter du pokédex

void MainWindow::setPokedex(PokedexClass *value)
{
    pokedex = value;
}

//Bouton du pokédex pour le trier numériquement

void MainWindow::on_pushButton_5_clicked() // tri num
{
    emit monSignal5();
}

//Bouton du pokédex pour le trier par ordre alphabétique

void MainWindow::on_pushButton_4_clicked() // tri alpha
{   emit monSignal4();
}

//Au click sur une cellule on émet l'index correspondant à la cellule pour ouvrir la fenêtre de détails correspondants

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    emit signalDetails(index);
}

//Fonction d'ouverture de la vue détaillée à partir des informations du pokédex et de la cellule

void MainWindow::openDetails(const QModelIndex &index){
    int num_poke;
    int num_info;
    int row;
    int column;
    row = index.row();
    column = index.column();
    num_poke = row*15 + column;

    if(num_poke >= pokedex->getList().count()){ return;}

    Pokemon poke = pokedex->getList()[num_poke];
    InfoPokemon info = pokedex->getListInfo()[poke.getIdinfo()-1];
    Details * dets = new Details(poke, info);
    dets->exec();
}

//Getter du jeu

GameClass *MainWindow::getGame() const
{
    return game;
}

//Setter du jeu

void MainWindow::setGame(GameClass *value)
{
    game = value;
}

//Bouton de proposition "Submit"

void MainWindow::on_pushButton_6_clicked()
{
    QString texte = ui->lineEdit->text();
    emit monSignal6(texte);
}

//Gestion du texte soumi, affichage de l'image du pokémon si il n'avait pas encore été trouvé

void MainWindow::submitted(const QString &texte){
    game->setTexte(texte);
    bool affiche = false;

    if(!game->getIsLaunched()){
        game->setIsLaunched(true);
        emit timerStart();
    }

    int count =0;
    int tritest = game->getTritest();

    for(int i = 0; i<game->getList().count(); i++){
        if(game->getList()[i].getName() == game->getTexte()){
            if(!game->getList()[i].getIsFound()){count ++;}
            affiche = true;
            ui->label->setText("Bravo, un de plus!");
            QList<Pokemon> listePoke;
            PokemonCreate pok;
            pok.createListPokemon(listePoke);
            int id = game->getList()[i].getIdalpha();
            listePoke[id -1].isFound = true;
            QList<Pokemon> list;
            list = game->getList();

            if(tritest == 0){
                game->tri(list, 1, 0);
            }

            for(int i=0; i<game->getList().count(); i++){
                if(list[i].getIsFound()){
                    listePoke[i].isFound = true;
                    count ++;
                }
            }

            if(tritest == 0){
                game->tri(listePoke, 0, 0);
            }
            game->setList(listePoke);
            ui->widget->setStyleSheet("background-image: url("+game->getList()[i].getPimage()+"); background-repeat: no-repeat; background-position: center;");
            ui->label_2->setText(QString::number(count)+"/151");
        }
    }
    if(!affiche){
        ui->label->setText("Erreur, ce Pokémon n'existe pas!");
    }
    ui->lineEdit->clear();
    emit dirty();
}

//Bouton de tri numérique du jeu

void MainWindow::on_pushButton_7_clicked()
{
    emit monSignal7();
}

//Tri numérique du jeu

void MainWindow::tri_set_num_game(){
    QList<Pokemon> list;
    list = game->getList();
    game->tri(list,0,0);
    game->setList(list);
    game->setTritest(0); //tri num
    emit dirty();
}

//Tri alphabétique du jeu

void MainWindow::tri_set_alpha_game(){
    QList<Pokemon> list;
    list = game->getList();
    game->tri(list,1,0);
    game->setList(list);
    game->setTritest(1); //tri alpha
    emit dirty();
}

//Bouton de tri alphabétique du jeu

void MainWindow::on_pushButton_8_clicked()
{
    emit monSignal8();
}

//Fonction de mise à jour de l'affichage du LCDNumber et réinitialisation du jeu

void MainWindow::updateLCD(){
    ui->lcdNumber->display(game->getTimeValue()->toString());
    if(game->getTimeValue()->toString() == "00:00:00"){
        QList<Pokemon> listePoke;
        PokemonCreate pok;
        pok.createListPokemon(listePoke);
        game->setList(listePoke);
        game->timer->stop();
        game->setIsLaunched(false);
        game->setTimeValue(new QTime(0, 20, 0));
    }
}

//Bouton d'export vers des fichiers CSV

void MainWindow::on_pushButton_3_clicked()
{
    emit toExport();
}

//Fonction d'export vers des CSV

void MainWindow::exportcsv(){

    QString pokemondata;
    pokemondata += "Idnum, Idalpha, Nom, Idinfo, URL image,\n";
    for(int i =0; i<pokedex->getList().count(); i++){
        pokemondata += QString::number(pokedex->getList()[i].getIdnum())+",";
        pokemondata += QString::number(pokedex->getList()[i].getIdalpha())+",";
        pokemondata += pokedex->getList()[i].getName()+",";
        pokemondata += QString::number(pokedex->getList()[i].getIdinfo())+",";
        pokemondata += pokedex->getList()[i].getPimage()+",\n";
    }
    QString pokemonFilename = QFileDialog::getSaveFileName(nullptr, "Export Pokemon to CSV");
    QFile PokemoncsvFile(pokemonFilename);
    if(PokemoncsvFile.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        QTextStream out(&PokemoncsvFile);
        out << pokemondata;
        PokemoncsvFile.close();
    }

    QString infodata;
    infodata +="Id, IdType1, IdType2, IdAtk1, IdAtk2, IdAtk3, IdAtk4, Gen, Lieu, Evolution 1, Evolution 2, Evolution 3, IdEffet,\n";
    for(int i=0; i<pokedex->getListInfo().count(); i++){
        infodata += QString::number(pokedex->getListInfo()[i].getId())+",";
        infodata += QString::number(pokedex->getListInfo()[i].getIdType1())+",";
        infodata += QString::number(pokedex->getListInfo()[i].getIdType2())+",";
        infodata += QString::number(pokedex->getListInfo()[i].getIdAtk1())+",";
        infodata += QString::number(pokedex->getListInfo()[i].getIdAtk2())+",";
        infodata += QString::number(pokedex->getListInfo()[i].getIdAtk3())+",";
        infodata += QString::number(pokedex->getListInfo()[i].getIdAtk4())+",";
        infodata += QString::number(pokedex->getListInfo()[i].getGen())+",";
        infodata += pokedex->getListInfo()[i].getLieu()+",";
        infodata += pokedex->getListInfo()[i].getEvo1()+",";
        infodata += pokedex->getListInfo()[i].getEvo2()+",";
        infodata += pokedex->getListInfo()[i].getEvo3()+",";
        infodata += QString::number(pokedex->getListInfo()[i].getIdEffet())+",\n";
    }
    QString infoFilename = QFileDialog::getSaveFileName(nullptr, "Export detailed data to CSV");
    QFile InfocsvFile(infoFilename);
    if(InfocsvFile.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        QTextStream out(&InfocsvFile);
        out << infodata;
        InfocsvFile.close();
    }

    QString typedata;
    typedata += "Id, Nom,\n";
    for(int i = 0; i<pokedex->getListType().count(); i++){
        typedata += QString::number(pokedex->getListType()[i].getId())+",";
        typedata += pokedex->getListType()[i].getName()+",\n";
    }
    QString typeFileName = QFileDialog::getSaveFileName(nullptr, "Export types to CSV");
    QFile TypecsvFile(typeFileName);
    if(TypecsvFile.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        QTextStream out(&TypecsvFile);
        out << typedata;
        TypecsvFile.close();
    }

    QString attaquedata;
    attaquedata += "Id, Nom, IdType, Description, IdEffet1, IdEffet2, IdEffet3,\n";
    for(int i=0; i<pokedex->getListAttaque().count(); i++){
        attaquedata += QString::number(pokedex->getListAttaque()[i].getId())+",";
        attaquedata += pokedex->getListAttaque()[i].getName()+",";
        attaquedata += QString::number(pokedex->getListAttaque()[i].getIdType())+",";
        attaquedata += pokedex->getListAttaque()[i].getDesc()+",";
        attaquedata += QString::number(pokedex->getListAttaque()[i].getIdEffet1())+",";
        attaquedata += QString::number(pokedex->getListAttaque()[i].getIdEffet2())+",";
        attaquedata += QString::number(pokedex->getListAttaque()[i].getIdEffet3())+",\n";
    }
    QString attaqueFileName = QFileDialog::getSaveFileName(nullptr, "Export attacks to CSV");
    QFile AttaquecsvFile(attaqueFileName);
    if(AttaquecsvFile.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        QTextStream out(&AttaquecsvFile);
        out << attaquedata;
        AttaquecsvFile.close();
    }

    QString effetdata;
    effetdata += "Id, Nom, Description,\n";
    for(int i = 0; i<pokedex->getListEffet().count(); i++){
        effetdata += QString::number(pokedex->getListEffet()[i].getId())+",";
        effetdata += pokedex->getListEffet()[i].getName()+",";
        effetdata += pokedex->getListEffet()[i].getDesc()+",\n";
    }
    QString effetFileName = QFileDialog::getSaveFileName(nullptr, "Export effects to CSV");
    QFile EffetcsvFile(effetFileName);
    if(EffetcsvFile.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        QTextStream out(&EffetcsvFile);
        out << effetdata;
        EffetcsvFile.close();
    }

}

//Bouton d'import de fichiers CSV

void MainWindow::on_pushButton_2_clicked()
{
    emit toImport();
}

//Fonction d'import depuis des fichiers CSV

void MainWindow::importcsv(){
    QString pokemonFileName = QFileDialog::getOpenFileName(
        this, "Choisissez le fichier contenant les Pokemon", "", "Fichier CSV (*.csv)");
    if (!pokemonFileName.isEmpty())
    {
        QFile PokemonFile(pokemonFileName);
        if(!PokemonFile.open(QIODevice::ReadOnly)){
            qDebug() << PokemonFile.errorString();
            return;
        }

        QTextStream pokestream(&PokemonFile);

        QList<Pokemon> listePoke;

        QStringList poke;
        int countPoke = 0;
        QString line_poke = pokestream.readLine();

        while(line_poke != ""){
            poke.clear();
            countPoke ++;
            poke << line_poke.split(',');
            qDebug() << line_poke;
            if(poke.count() != 5){
                QMessageBox::information(this, "Import de Pokemon", "Erreur dans le fichier ligne "+QString::number(countPoke));
                return;
            }
            else{
                listePoke << Pokemon(poke[0].toInt(), poke[1].toInt(), poke[2], poke[3].toInt(), poke[4]);
            }
            line_poke = pokestream.readLine();
        }
        pokedex->setRow((listePoke.count()/15)+1);
        game->setRow((listePoke.count()/15)+1);
        pokedex->setList(listePoke);
        game->setList(listePoke);
    }

    QString infoFileName = QFileDialog::getOpenFileName(this, "Choisissez le fichier contenant les informations détaillées", "", "Fichier CSV (*.csv)");
    if(!infoFileName.isEmpty()){
        QFile InfoFile(infoFileName);
        if(!InfoFile.open(QIODevice::ReadOnly)){
            qDebug() << InfoFile.errorString();
            return;
        }

        QTextStream infostream(&InfoFile);
        QList<InfoPokemon> listeInfo;
        QStringList info;
        int countinfo = 0;
        QString line_info = infostream.readLine();

        while(line_info != ""){
            info.clear();
            countinfo++;
            info << line_info.split(',');
            if(info.count() != 13){
                QMessageBox::information(this, "Import d'informations détaillées", "Erreur dans le fichier ligne "+QString::number(countinfo));
                return;
            }
            else{
                listeInfo << InfoPokemon(info[0].toInt(), info[1].toInt(), info[2].toInt(), info[3].toInt(), info[4].toInt(), info[5].toInt(), info[6].toInt(), info[7].toInt(), info[8], info[9], info[10], info[11], info[12].toInt());
            }
            line_info = infostream.readLine();
        }
        pokedex->setListInfo(listeInfo);
    }

    QString typeFileName = QFileDialog::getOpenFileName(this, "Choisissez le fichier contenant les types", "", "Fichier CSV (*.csv)");
    if(!typeFileName.isEmpty()){
        QFile TypeFile(typeFileName);
        if(!TypeFile.open(QIODevice::ReadOnly)){
            qDebug() << TypeFile.errorString();
            return;
        }

        QTextStream typestream(&TypeFile);
        QList<Type> listeType;
        QStringList type;
        int counttype = 0;
        QString line_type = typestream.readLine();

        while(line_type != ""){
            type.clear();
            counttype++;
            type << line_type.split(',');
            if(type.count() != 2){
                QMessageBox::information(this, "Import des types", "Erreur dans le fichier ligne "+QString::number(counttype));
                return;
            }
            else{
                listeType << Type(type[0].toInt(), type[1]);
            }
            line_type = typestream.readLine();
        }
        pokedex->setListType(listeType);
    }

    QString attaqueFileName = QFileDialog::getOpenFileName(this, "Choisissez le fichier contenant les attaques", "", "Fichier CSV (*.csv)");
    if(!attaqueFileName.isEmpty()){
        QFile AttaqueFile(attaqueFileName);
        if(!AttaqueFile.open(QIODevice::ReadOnly)){
            qDebug() << AttaqueFile.errorString();
            return;
        }

        QTextStream attaquestream(&AttaqueFile);
        QList<Attaque> listeAttaque;
        QStringList attaque;
        int countattaque = 0;
        QString line_attaque = attaquestream.readLine();

        while(line_attaque != ""){
            attaque.clear();
            countattaque++;
            attaque << line_attaque.split(',');
            if(attaque.count() != 7){
                QMessageBox::information(this, "Import des attaques", "Erreur dans le fichier ligne "+QString::number(countattaque));
                return;
            }
            else{
                listeAttaque << Attaque(attaque[0].toInt(), attaque[1], attaque[2].toInt(), attaque[3], attaque[4].toInt(), attaque[5].toInt(), attaque[6].toInt());
            }
            line_attaque = attaquestream.readLine();
        }
        pokedex->setListAttaque(listeAttaque);
    }

    QString effetFileName = QFileDialog::getOpenFileName(this, "Choisissez le fichier contenant les effets", "", "Fichier CSV (*.csv)");
    if(!effetFileName.isEmpty()){
        QFile EffetFile(effetFileName);
        if(!EffetFile.open(QIODevice::ReadOnly)){
            qDebug() << EffetFile.errorString();
            return;
        }

        QTextStream effetstream(&EffetFile);
        QList<Effet> listeEffet;
        QStringList effet;
        int counteffet = 0;
        QString line_effet = effetstream.readLine();

        while(line_effet != ""){
            effet.clear();
            counteffet++;
            effet << line_effet.split(',');
            if(effet.count() != 3){
                QMessageBox::information(this, "Import des effets", "Erreur dans le fichier ligne "+QString::number(counteffet));
                return;
            }
            else{
                listeEffet << Effet(effet[0].toInt(), effet[1], effet[2]);
            }
            line_effet = effetstream.readLine();
        }
        pokedex->setListEffet(listeEffet);
    }
    emit dirty();
}

void MainWindow::onKeyPressed(){
    on_pushButton_6_clicked();
}
