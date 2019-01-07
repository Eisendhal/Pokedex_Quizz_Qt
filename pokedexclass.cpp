#include "pokedexclass.h"
#include <QList>
#include "pokemon.h"
#include <QDebug>
#include "infopokemon.h"
#include "type.h"
#include <QAbstractItemModel>
#include <QAbstractTableModel>
#include <QModelIndex>

//Constructeur d'une PokedexClass à partir de listes de Pokemon, Infopokemon et Type

PokedexClass::PokedexClass(QList<Pokemon> list, QList<InfoPokemon> listInfo, QList<Type> listType, QList<Attaque> listAttaque, QList<Effet> listEffet, QObject * parent) : QAbstractTableModel(parent)
{
    this->row = 11;
    this->column = 15;
    this->list = list;
    this->listInfo = listInfo;
    this->listType = listType;
    tritest = 1; //tri alpha
    this->listAttaque = listAttaque;
    this->listEffet = listEffet;
}



int PokedexClass::rowCount(const QModelIndex &parent) const{
    return this->row;
}


int PokedexClass::columnCount(const QModelIndex &parent) const{
    return this->column;
}

//Data du pokédex permettant l'affichage des images

QVariant PokedexClass::data(const QModelIndex &index, int role) const{
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
            return QIcon(this->list.at(test).getPimage());
        }
        else{
            return QVariant();
        }
    }
    else return QVariant();
}

//Fonction de tri du pokédex

void PokedexClass::tri(QList<Pokemon> &list, int i, int type = 0)
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

//Getter de la liste des pokémon du pokédex

QList<Pokemon> PokedexClass::getList() const
{
    return list;
}

//Setter de la liste des pokémon du pokédex

void PokedexClass::setList(const QList<Pokemon> &value)
{
    list = value;
}

//Getter de la liste des types du pokédex

QList<Type> PokedexClass::getListType() const
{
    return listType;
}

//Setter de la liste des types du pokédex

void PokedexClass::setListType(const QList<Type> &value)
{
    listType = value;
}

//Getter de la liste d'InfoPokemon du pokédex

QList<InfoPokemon> PokedexClass::getListInfo() const
{
    return listInfo;
}

//Setter de liste d'InfoPokemon du pokédex

void PokedexClass::setListInfo(const QList<InfoPokemon> &value)
{
    listInfo = value;
}

//Slot onDirty du pokédex permettant d'émettre un datachanged

void PokedexClass::onDirty()
{
    emit dataChanged(this->index(0, 0), this->index(this->rowCount(), this->columnCount()));
}

//Setter de la liste des attaques du pokédex

void PokedexClass::setListAttaque(const QList<Attaque> &value)
{
    listAttaque = value;
}

//Getter de la liste des effets du pokédex

QList<Effet> PokedexClass::getListEffet() const
{
    return listEffet;
}

//Setter de la liste des effets du pokédex

void PokedexClass::setListEffet(const QList<Effet> &value)
{
    listEffet = value;
}

//Getter de la liste des attaques du pokédex

QList<Attaque> PokedexClass::getListAttaque() const
{
    return listAttaque;
}

//Getter du nombre de lignes du pokédex

int PokedexClass::getRow() const
{
    return row;
}

//Getter du nombre de colonnes du pokédex

void PokedexClass::setRow(int value)
{
    row = value;
}

//Getter de l'indicateur de méthode de tri actuel

int PokedexClass::getTri() const
{
    return tritest;
}

//Setter de cet indicateur

void PokedexClass::setTri(int value)
{
    tritest = value;
}
