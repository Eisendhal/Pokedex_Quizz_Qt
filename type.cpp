#include "type.h"
#include <QString>

//Getter de l'id du type

int Type::getId() const
{
    return id_;
}

//Getter du nom du type

QString Type::getName() const
{
    return name_;
}

//Constructeur d'un type

Type::Type(int id, const QString &name)
{
    id_ = id;
    name_ = name;
}
