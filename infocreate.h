#ifndef INFOCREATE_H
#define INFOCREATE_H
#include "infopokemon.h"
#include <QList>

// Fichier header de la classe InfoCreate, un constructeur par défaut et une méthode permettant de remplir une liste d'informations détaillées

class InfoCreate
{
public:
    InfoCreate();
    void createListInfo(QList<InfoPokemon> &list);
};

#endif // INFOCREATE_H
