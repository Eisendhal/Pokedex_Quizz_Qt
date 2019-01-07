#ifndef ATTAQUECREATE_H
#define ATTAQUECREATE_H

// Fichier header de la classe AttaqueCreate, un constructeur par défaut et une méthode permettant de remplir une liste d'attaques

#include "attaque.h"
#include <QList>

class AttaqueCreate
{
public:
    AttaqueCreate();
    void createListAttaque(QList<Attaque> &list);
};


#endif // ATTAQUECREATE_H
