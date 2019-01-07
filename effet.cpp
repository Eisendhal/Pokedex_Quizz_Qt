#include "effet.h"
#include <QString>

//getter du nom de l'effet

QString Effet::getName() const
{
    return name_;
}

//getter de la description de l'effet

QString Effet::getDesc() const
{
    return desc_;
}

// getter de l'id de l'effet

int Effet::getId() const
{
    return id_;
}

//Constructeur d'un effet

Effet::Effet(int id, const QString &name, const QString &desc)
{
    id_ = id;
    name_ = name;
    desc_ = desc;
}
