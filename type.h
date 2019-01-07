#ifndef TYPE_H
#define TYPE_H
#include <QString>

// Fichier header de la classe Type permettant de créer un type avec un constructeur et des getters

class Type
{
private:
    int id_;
    QString name_;
public:
    Type(int id, const QString &name);
    int getId() const;

    QString getName() const;

};

#endif // TYPE_H
