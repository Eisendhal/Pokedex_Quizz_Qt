#ifndef POKEDEXCLASS_H
#define POKEDEXCLASS_H

#include <QAbstractTableModel>
#include <QModelIndex>
#include <QVariant>
#include <QObject>
#include "type.h"

#include <QList>
#include "pokemon.h"
#include "infopokemon.h"
#include "attaque.h"
#include "effet.h"

// Fichier header de la classe PokedexClass corerspondant à la vue du Pokédex

class PokedexClass : public QAbstractTableModel
{
    Q_OBJECT
public:
    PokedexClass(QList<Pokemon> list, QList<InfoPokemon> listInfo, QList<Type> listType, QList<Attaque> listAttaque, QList<Effet> listEffet, QObject * parent =0);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    void tri (QList<Pokemon> &list, int i, int type);

    QList<Pokemon> getList() const;
    void setList(const QList<Pokemon> &value);

    QList<Type> getListType() const;
    void setListType(const QList<Type> &value);

    QList<InfoPokemon> getListInfo() const;
    void setListInfo(const QList<InfoPokemon> &value);

    int getTri() const;
    void setTri(int value);

    int getRow() const;
    void setRow(int value);

    QList<Attaque> getListAttaque() const;

    QList<Effet> getListEffet() const;
    void setListEffet(const QList<Effet> &value);

    void setListAttaque(const QList<Attaque> &value);

public slots:
    void onDirty();


private :
    int row;
    int column;
    QList<Pokemon> list;
    QList<Type> listType;
    QList<InfoPokemon> listInfo;
    QList<Attaque> listAttaque;
    QList<Effet> listEffet;
    int tritest;



};

#endif // POKEDEXCLASS_H
