#include "details.h"
#include "ui_details.h"
#include <QLabel>
#include <QIcon>
#include <QString>
#include "attaquecreate.h"
#include "infocreate.h"
#include "effetcreate.h"
#include "attaque.h"
#include "effet.h"
#include "infopokemon.h"
#include "type.h"
#include "typecreate.h"
#include <QDebug>

//Vue détaillée d'un pokémon

Details::Details(Pokemon pokemon, InfoPokemon info, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Details)
{
    QList<Type> listeType;
    typeCreate typ;
    typ.createListType(listeType);

    QList<Attaque> listeAttaque;
    AttaqueCreate att;
    att.createListAttaque(listeAttaque);

    QList<Effet> listeEffet;
    EffetCreate eff;
    eff.createListEffet(listeEffet);

    //On affiche l'image du pokémon correspondant ainsi que les différentes informations qui lui sont liées dans les listes d'attaques, de types, d'effets et d'informations

    ui->setupUi(this);
    QString image = pokemon.getPimage();
    ui->widget->setStyleSheet("background-image: url("+image+"); background-repeat: no-repeat; background-position: center;");
    ui->label_3->setText("Nom : \n          "+pokemon.getName());
    ui->label_4->setText("Génération : \n           "+QString::number(info.getGen()));
    ui->label_2->setText("Types : \n            "+listeType[info.getIdType1()].getName()+"       "+listeType[info.getIdType2()].getName());
    ui->label->setText("Attaques :\n            "+listeAttaque[info.getIdAtk1()].getName()+"\n            "+listeAttaque[info.getIdAtk2()].getName()+"\n            "+listeAttaque[info.getIdAtk3()].getName()+"\n            "+listeAttaque[info.getIdAtk4()].getName());
    ui->label_5->setText("Lieu de rencontre :\n         "+info.getLieu());
    ui->label_6->setText("Evolutions :\n            "+info.getEvo1()+"           "+info.getEvo2()+"           "+info.getEvo3());
    ui->label_7->setText("Effet :\n         "+listeEffet[info.getIdEffet()].getName());
}

Details::~Details()
{
    delete ui;
}

// Bouton "Fermer"

void Details::on_pushButton_clicked()
{
   delete this;
}
