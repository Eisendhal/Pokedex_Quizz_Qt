#ifndef POKEMONCREATE_H
#define POKEMONCREATE_H
#include "pokemon.h"
#include <QList>

// Fichier header de la classe PokemonCreate, un constructeur par défaut et une méthode permettant de remplir une liste de Pokémon

class PokemonCreate
{
public:
    PokemonCreate();
    void createListPokemon(QList<Pokemon> &list);
};

#endif // POKEMONCREATE_H
