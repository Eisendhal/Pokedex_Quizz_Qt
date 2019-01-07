#ifndef INFOPOKEMON_H
#define INFOPOKEMON_H
#include <QString>
#include <QIcon>
#include <QVector>

// Fichier header de la classe InfoPokemon, permet la création d'un bloc d'informations avec getters et setters

class InfoPokemon
{
private:
    int id_;

    int idType1_;
    int idType2_;

    int idAtk1_;
    int idAtk2_;
    int idAtk3_;
    int idAtk4_;

    bool renc_;
    bool pos_;

    int gen_;

    QString lieu_;

    QString evo1_;
    QString evo2_;
    QString evo3_;

    int idEffet_;

public:
    InfoPokemon(int id, int idType1, int idType2, int idAtk1, int idAtk2, int idAtk3, int idAtk4, int gen, const QString &lieu, const QString &evo1, const QString &evo2, const QString &evo3, int idEffet);
    int getId() const;

    int getIdType1() const;

    int getIdType2() const;

    int getIdAtk1() const;

    int getIdAtk2() const;

    int getIdAtk3() const;

    int getIdAtk4() const;

    bool getRenc() const;
    void setRenc(bool renc);
    bool getPos() const;
    void setPos(bool pos);
    int getGen() const;

    QString getLieu() const;
    void setLieu(const QString &lieu);

    QString getEvo1() const;
    QString getEvo2() const;
    QString getEvo3() const;

    int getIdEffet() const;

};

#endif // INFOPOKEMON_H
