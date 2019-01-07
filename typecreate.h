#ifndef TYPECREATE_H
#define TYPECREATE_H
#include <QList>
#include "type.h"

// Fichier header de la classe typeCreate, un constructeur par défaut et une méthode permettant de remplir une liste de types

class typeCreate
{
public:
    typeCreate();
    void createListType (QList<Type> &List);
};

#endif // TYPECREATE_H
