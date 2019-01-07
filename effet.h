#ifndef EFFET_H
#define EFFET_H
#include <QString>

// Fichier header de la classe Effet, un constructeur et des setters

class Effet
{
private:
    int id_;
    QString name_;
    QString desc_;
public:
    Effet(int id, const QString &name, const QString &desc);
    QString getName() const;

    QString getDesc() const;

    int getId() const;

};

#endif // EFFET_H
