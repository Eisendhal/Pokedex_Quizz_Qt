
#include "mainwindow.h"
#include <QApplication>
#include "pokemon.h"
#include "infopokemon.h"
#include "type.h"
#include "effet.h"
#include "attaque.h"
#include "pokedexclass.h"
#include "pokemoncreate.h"
#include <iostream>
#include <QDebug>
#include <QPixmap>
#include <QVector>
#include <QString>
#include <QList>

//Fonction main permettant de lancer l'application

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
