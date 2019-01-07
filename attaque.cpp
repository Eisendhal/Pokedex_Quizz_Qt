#include "attaque.h"

//getter de l'id de l'attaque

int Attaque::getId() const
{
    return id_;
}

//getter du nom de l'attaque

QString Attaque::getName() const
{
    return name_;
}

//getter de l'id du type de l'attaque

int Attaque::getIdType() const
{
    return idType_;
}

//getter de la description de l'attaque

QString Attaque::getDesc() const
{
    return desc_;
}

//getter de l'id du premier effet de l'attaque

int Attaque::getIdEffet1() const
{
    return idEffet1_;
}

//getter de l'i du deuxième effet de l'attaque

int Attaque::getIdEffet2() const
{
    return idEffet2_;
}

//getter de l'id de l'effet de la troisième attaque

int Attaque::getIdEffet3() const
{
    return idEffet3_;
}

//constructeur d'une attaque

Attaque::Attaque(int id, const QString &name, int idType, const QString &desc, int idEffet1, int idEffet2, int idEffet3)
{
    id_ = id;
    name_ = name;
    idType_ = idType;
    desc_ = desc;
    idEffet1_ = idEffet1;
    idEffet2_ = idEffet2;
    idEffet3_ = idEffet3;
}
