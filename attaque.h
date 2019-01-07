#ifndef ATTAQUE_H
#define ATTAQUE_H
#include <QString>

// Fichier header de la classe Attaque, constructeur et getters/setters


class Attaque
{
private:
    int id_;
    QString name_;
    int idType_;
    QString desc_;
    int idEffet1_;
    int idEffet2_;
    int idEffet3_;
public:
    Attaque(int id, const QString &name, int idType, const QString &desc, int idEffet1, int idEffet2, int idEffet3);
    int getId() const;

    QString getName() const;

    int getIdType() const;

    QString getDesc() const;

    int getIdEffet1() const;

    int getIdEffet2() const;

    int getIdEffet3() const;
};

#endif // ATTAQUE_H
