#include "infopokemon.h"
#include <QVector>
#include <QIcon>
#include <QString>

//Getter de l'id d'un bloc d'informations détaillées

int InfoPokemon::getId() const
{
    return id_;
}

//Getter de l'id tu premier type

int InfoPokemon::getIdType1() const
{
    return idType1_;
}

//Getter de l'id du deuxième type

int InfoPokemon::getIdType2() const
{
    return idType2_;
}

//Getter de l'id de la première attaque

int InfoPokemon::getIdAtk1() const
{
    return idAtk1_;
}

//Getter de l'id de la deuxième attaque

int InfoPokemon::getIdAtk2() const
{
    return idAtk2_;
}

//Getter de l'id de la troisième attaque

int InfoPokemon::getIdAtk3() const
{
    return idAtk3_;
}

//Getter de l'id de la quatrième attaque

int InfoPokemon::getIdAtk4() const
{
    return idAtk4_;
}

//Getter du booléen informant si le pokemon a déjà été rencontré

bool InfoPokemon::getRenc() const
{
    return renc_;
}

//Setter de ce même booléen

void InfoPokemon::setRenc(bool renc)
{
    renc_ = renc;
}

//Getter du booléen informant si le pokémon a déjà été capturé

bool InfoPokemon::getPos() const
{
    return pos_;
}

//Setter de ce même booléen

void InfoPokemon::setPos(bool pos)
{
    pos_ = pos;
}

//Getter de la génération du pokémon

int InfoPokemon::getGen() const
{
    return gen_;
}

//Getter du lieu de rencontre ou de possibilité de capture du pokémon

QString InfoPokemon::getLieu() const
{
    return lieu_;
}

//Setter de ce même lieu

void InfoPokemon::setLieu(const QString &lieu)
{
    lieu_ = lieu;
}

//Getter du nom de la première évolution du pokémon

QString InfoPokemon::getEvo1() const
{
    return evo1_;
}

//Getter du nom de la deuxième évolution du pokémon

QString InfoPokemon::getEvo2() const
{
    return evo2_;
}

//Getter du nom de la troisième évolution du pokémon

QString InfoPokemon::getEvo3() const
{
    return evo3_;
}

//Getter de l'id de l'effet du pokémon

int InfoPokemon::getIdEffet() const
{
    return idEffet_;
}

//Constructeur d'une InfoPokemon

InfoPokemon::InfoPokemon(int id, int idType1, int idType2, int idAtk1, int idAtk2, int idAtk3, int idAtk4, int gen, const QString &lieu, const QString &evo1, const QString &evo2, const QString &evo3, int idEffet)
{
    id_ = id;
    idType1_ = idType1;
    idType2_ = idType2;
    idAtk1_ = idAtk1;
    idAtk2_ = idAtk2;
    idAtk3_ = idAtk3;
    idAtk4_ = idAtk4;
    gen_ = gen;
    this->evo1_ = evo1;
    this->evo2_ = evo2;
    this->evo3_ = evo3;
    idEffet_ = idEffet;
    renc_ = false;
    pos_ = false;
    lieu_ = lieu;

}
