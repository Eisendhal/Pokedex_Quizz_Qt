#include "gameclass.h"
#include <QList>
#include "pokemon.h"
#include <QDebug>
#include "infopokemon.h"
#include "type.h"
#include <QAbstractItemModel>
#include <QAbstractTableModel>
#include <QModelIndex>

//Constructeur de la classe permettant la vue du jeu, par défaut il est paramétré pour accueillir les 151 pokémon de la première génération

GameClass::GameClass(QList<Pokemon> list, QList<InfoPokemon> listInfo, QList<Type> listType, QObject * parent) : QAbstractTableModel(parent)
{
    this->row = 11;
    this->column = 15;
    this->list = list;
    this->listInfo = listInfo;
    this->listType = listType;
    this->tritest = 1;
    this->timer = new QTimer();
    this->timeValue = new QTime(0, 20, 0);
    this->isLaunched = false;
}

int GameClass::rowCount(const QModelIndex &parent) const{
    return this->row;
}


int GameClass::columnCount(const QModelIndex &parent) const{
    return this->column;
}

//Méthode data permettant l'affichage des images

QVariant GameClass::data(const QModelIndex &index, int role) const{
    if (! index.isValid()){
        return QVariant();
    }
    if (index.row() >= this->row){
        return QVariant();
    }
    if (index.column() >= this->column){
        return QVariant();
    }
    if (role == Qt::DecorationRole){
        int test = index.row()*this->column + index.column();
        if(test < list.count()){
            if(this->list[test].getIsFound()){
                return QIcon(this->list[test].getPimage());
            }
            else{
                return QIcon(":/PetiteImage/non_creee.png");
            }
        }
        else{
            return QVariant();
        }
    }
    else return QVariant();
}

//Fonction de tri numérique et alphabétique des pokémon dans le jeu

void GameClass::tri(QList<Pokemon> &list, int i, int type = 0)
{
    int nbPokemon = list.count();
    QList<Pokemon> tmp;
    int nb = list.count();

    if (i == 0) // tri num
    {
        for (int j = 1; j <= nbPokemon; j++)
        {
        for (int k = 0; k < nb; k++)
           {
               if (list[k].getIdnum() == j)
               {
                   tmp << list[k];
               }
           }
       }
       list = tmp;
   }

   else if (i == 1) // tri alpha
   {
       for (int j = 1; j <= nbPokemon; j++)
       {
           for (int k = 0; k < nb; k++)
           {
               if (list[k].getIdalpha() == j)
               {
                   tmp << list[k];
               }
           }
       }
       list = tmp;
   }

   else {qDebug() << "fail"; }


}

//Getter de la liste de pokémon du jeu

QList<Pokemon> GameClass::getList() const
{
    return list;
}
//Setter de la liste de pokémon du jeu


void GameClass::setList(const QList<Pokemon> &value)
{
    list = value;
}

//Getter de la liste des types du jeu

QList<Type> GameClass::getListType() const
{
    return listType;
}

//Setter de la liste des types du jeu

void GameClass::setListType(const QList<Type> &value)
{
    listType = value;
}

//Getter de la liste des informations détaillées du jeu

QList<InfoPokemon> GameClass::getListInfo() const
{
    return listInfo;
}

//Setter de la liste des informations détaillées du jeu

void GameClass::setListInfo(const QList<InfoPokemon> &value)
{
    listInfo = value;
}

//Slot permettant d'émettre le signal datachanged

void GameClass::onDirty()
{
    emit dataChanged(this->index(0, 0), this->index(this->rowCount(), this->columnCount()));
}

//Getter du timer du jeu

QTimer *GameClass::getTimer() const
{
    return timer;
}

//Getter de la valeur du temps du jeu

QTime *GameClass::getTimeValue() const
{
    return timeValue;
}

//Getter de la méthode de tri actuellement en place

int GameClass::getTritest() const
{
    return tritest;
}

//Setter de la méthode de tri en place

void GameClass::setTritest(int value)
{
    tritest = value;
}

//Setter du texte en mémoire du jeu, utile lors de la soumission d'une proposition par le joueur

void GameClass::setTexte(const QString &value)
{
    texte = value;
}

//Getter du texte en mémoire du jeu

QString GameClass::getTexte() const
{
    return texte;
}

//Fonction de mise à jour de la valeur du temps à chaque seconde

void GameClass::updateTime(){
    this->timeValue->setHMS(0, this->timeValue->addSecs(-1).minute(), this->timeValue->addSecs(-1).second());
}

//Getter du booléen informant de l'état du jeu (en cours ou non)

bool GameClass::getIsLaunched() const
{
    return isLaunched;
}

//Setter de ce même booléen

void GameClass::setIsLaunched(bool value)
{
    isLaunched = value;
}

//Fonction permettant de démarrer le timer du jeu

void GameClass::startTimer(){
    this->timer->start(1000);
}

//Getter du nombre de lignes du jeu

int GameClass::getRow() const
{
    return row;
}

//Setter du nombre de lignes du jeu

void GameClass::setRow(int value)
{
    row = value;
}

//Setter de la valeur du temps du jeu

void GameClass::setTimeValue(QTime *value)
{
    timeValue = value;
}
