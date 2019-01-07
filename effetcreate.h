#ifndef EFFETCREATE_H
#define EFFETCREATE_H
#include "effet.h"
#include <QList>

// Fichier header de la classe EffetCreate, un constructeur par défaut et une méthode permettant de remplir une liste d'effets

class EffetCreate
{
public:
    EffetCreate();
    void createListEffet(QList<Effet> &list);
};

#endif // EFFETCREATE_H
