#include "pokemon.h"

//Getter du booléen indiquant si le pokémon a été trouvé dans le jeu

bool Pokemon::getIsFound() const
{
    return isFound;
}

//Setter de ce même booléen

void Pokemon::setIsFound(bool value)
{
    isFound = value;
}

//Getter de l'url de l'image associée au pokémon

QString Pokemon::getPimage() const
{
    return pimage_;
}

//Getter de l'id de l'InfoPokemon associée au pokémon

int Pokemon::getIdinfo() const
{
    return idinfo_;
}

//Getter du nom du pokémon

QString Pokemon::getName() const
{
    return name_;
}

//Getter de l'idalpha du pokémon

int Pokemon::getIdalpha() const
{
    return idalpha_;
}

//Getter de l'idnum du pokémon

int Pokemon::getIdnum() const
{
    return idnum_;
}

//Constructeur d'un pokémon

Pokemon::Pokemon(int idnum, int idalpha, const QString &name, int idinfo, const QString &pimage)
{
    idnum_ = idnum;
    idalpha_ = idalpha;
    name_ = name;
    idinfo_ = idinfo;
    pimage_ = pimage;
    isFound = false;
}


