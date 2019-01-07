#include "typecreate.h"
#include "type.h"
#include <QList>

//Constructeur par défaut

typeCreate::typeCreate()
{

}

//Fonction permettant de remplir une liste des types de pokémon de la première génération

void typeCreate::createListType (QList<Type> &List)
{

    List << Type (0, "");
    List << Type (1,"Plante");
    List << Type (2,"Poison");
    List << Type (3, "Psy");
    List << Type (4, "Insecte");
    List << Type (5, "Eau");
    List << Type (6, "Roche");
    List << Type (7, "Feu");
    List << Type (8, "Vol");
    List << Type (9, "Glace");
    List << Type (10, "Normal");
    List << Type (11, "Combat");
    List << Type (12, "Dragon");
    List << Type (13, "Spectre");
    List << Type (14, "Electrik");
    List << Type (15, "Sol");


}
