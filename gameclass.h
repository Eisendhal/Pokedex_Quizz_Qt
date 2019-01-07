#ifndef GAMECLASS_H
#define GAMECLASS_H
#include <QAbstractTableModel>
#include <QModelIndex>
#include <QVariant>
#include <QObject>
#include "type.h"

#include <QList>
#include "pokemon.h"
#include "infopokemon.h"
#include <QTime>
#include <QTimer>

// Fichier header de la classe GameClass correspondant à la vue du jeu

class GameClass : public QAbstractTableModel
{
    Q_OBJECT
public:
    GameClass(QList<Pokemon> list, QList<InfoPokemon> listInfo, QList<Type> listType, QObject * parent =0);
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

    QString getTexte() const;

    void setTexte(const QString &value);

    int getTritest() const;
    void setTritest(int value);

    QTime *getTimeValue() const;

    QTimer *getTimer() const;

    bool getIsLaunched() const;
    void setIsLaunched(bool value);

    QTimer *timer;

    void setTimeValue(QTime *value);

    int getRow() const;
    void setRow(int value);

public slots:
    void onDirty();
    void updateTime();
    void startTimer();

private :
    int row;
    int column;
    QList<Pokemon> list;
    QList<Type> listType;
    QList<InfoPokemon> listInfo;
    QString texte;
    int tritest;
    QTime *timeValue;
    bool isLaunched;
};

#endif // GAMECLASS_H#include <QAbstractTableModel>

