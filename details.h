#ifndef DETAILS_H
#define DETAILS_H

// Fichier header de la classe Details, permet la vue détaillée d'un pokémon

#include <QDialog>
#include "pokemon.h"
#include "infopokemon.h"

namespace Ui {
class Details;
}

class Details : public QDialog
{
    Q_OBJECT

public:
    explicit Details(Pokemon pokemon, InfoPokemon info, QWidget *parent = 0);
    ~Details();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Details *ui;
};

#endif // DETAILS_H
