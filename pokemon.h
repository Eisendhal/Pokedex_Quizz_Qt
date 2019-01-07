#ifndef POKEMON_H
#define POKEMON_H

#include <QString>
#include <QIcon>

// Fichier header de la classe Pokémon permettant de créer des Pokémon avec getters et setters

class Pokemon
{

private:
    int idnum_;
    int idalpha_;
    QString name_;
    int idinfo_;
    QString pimage_;

public:

    bool isFound;
    QString getPimage() const;


    int getIdinfo() const;


    QString getName() const;


    int getIdalpha() const;


    int getIdnum() const;


    Pokemon(int idnum, int idalpha, const QString &name, int idinfo, const QString &pimage);

    bool getIsFound() const;
    void setIsFound(bool value);

};

#endif // POKEMON_H
