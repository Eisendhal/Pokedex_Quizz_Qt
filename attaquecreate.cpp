#include "attaquecreate.h"
#include <QList>

//Constructeur par défaut

AttaqueCreate::AttaqueCreate()
{
}

//Fonction permettant de remplir une liste d'attaques pour les pokémon de la première génération, par soucis de temps, nous n'avons pas implémenté toutes les attaques

void AttaqueCreate::createListAttaque(QList<Attaque> &list)
{

    list << Attaque(0, "", 0, "", 0, 0, 0);
	list << Attaque(1, "Charge", 10, "Charge l'ennemi pour infliger des dégâts", 0, 0, 0);
	list << Attaque(2, "Groz'yeux", 10, "Baisse la défense", 1, 0, 0);
	list << Attaque(3, "Vol-vie", 1, "Vole une partie des HP adverses", 0, 0, 0);
    list << Attaque(4, "Tranch'herb", 1, "Envoie des feuilles taux de critiques élévé", 0, 0, 0);
	list << Attaque(5, "Fouet-lianes", 1, "Frappe l'ennemi avec des lianes", 0, 0, 0);
	list << Attaque(6, "Lance-soleil", 1, "Charge au premier tour puis frappe avec l'énergie solaire accumulée", 0, 0, 0);
	list << Attaque(7, "Mega-sangsue", 1, "Vole une partie des HP adverses", 0, 0, 0);
    list << Attaque(8, "Bomb-beurk", 2, "Envoie une boule de poison sur l'ennemi peut empoisonner", 3, 0, 0);
	list << Attaque(9, "Plaquage", 10, "Charge l'ennemi et peut le paralyser", 4, 0, 0);
	list << Attaque(10, "Griffe", 10, "Griffe l'ennemi pour infliger des dégâts", 0, 0, 0);
	list << Attaque(11, "Rugissement", 10, "Rugit gentiment pour baisser l'attaque ennemie", 5, 0, 0);
    list << Attaque(12, "Flammèche", 7, "Brûle l'ennemi avec une petite flamme peut bruler", 7, 0, 0);
	list << Attaque(13, "Brouillard", 10, "Lance une boule de brouillard et baisse la précision adverse", 8, 0, 0);
	list << Attaque(14, "Danseflammes", 7, "Piège l'ennemi dans un tourbillon de flammes qui le blesse chaque tour pendant 5 tours", 0, 0, 0);
    list << Attaque(15, "Lance-flammes", 7, "Projète un torrent de flammes sur l'ennemi peut le bruler", 7, 0, 0);
	list << Attaque(16, "Cru-aile", 8, "Frappe l'ennemi avec ses ailes", 0, 0, 0);
    list << Attaque(17, "Tranche", 10, "Lacère l'ennemi avec ses griffes taux de critiques élevé", 0, 0, 0);
    list << Attaque(18, "Déflagration", 7, "Projète des flammes intenses sur l'ennemi peut le bruler", 7, 0, 0);
	list << Attaque(19, "Ecras'face", 10, "Frappe l'ennemi avec ses pattes", 0, 0, 0);
	list << Attaque(20, "Mimi-queue", 10, "Baisse la défense", 1, 0, 0);
	list << Attaque(21, "Bulles d'O", 5, "Projète des bulles sur l'ennemi et le ralenti", 10, 0, 0);
	list << Attaque(22, "Coup d'krane", 10, "Prend de l'élan au premier tour avant de charger au deuxième", 0, 0, 0);
	list << Attaque(23, "Repli", 5, "Se recroqueville dans sa carapace pour augmenter sa défense", 11, 0, 0);
    list << Attaque(24, "Morsure", 10, "Mort méchamment l'ennemi peut l'apeurer", 12, 0, 0);
	list << Attaque(25, "Hydrocanon", 5, "Projète un violent jet d'eau sur l'ennemi", 0, 0, 0);
	list << Attaque(26, "Surf", 5, "Une vague déferle sur l'ennemi et lui inflige des dégâts", 0, 0, 0);
    list << Attaque(27, "Laser glace", 9, "Envoie un rayon gelé sur l'ennemi peut le geler", 13, 0, 0);
	list << Attaque(28, "Abîme", 15, "Ouvre un gouffre sous le Pokémon qui est K.O. en un coup", 14, 0, 0);
	list << Attaque(29, "Sécretion", 4, "Projète de la toile pour ralentir l'adversaire", 10, 0, 0);
	list << Attaque(30, "Armure", 10, "Endurci le corps afin d'augmenter la défense", 11, 0, 0);
	list << Attaque(31, "Tornade", 10, "Crée une tornade autour de l'ennemi qui le blesse", 0, 0, 0);
	list << Attaque(32, "Para-spore", 1, "L'ennemi est touché par des spores qui le paraylsent", 4, 0, 0);
	list << Attaque(33, "Poudre-dodo", 1, "L'ennemi est touché par des spores qui l'endorment", 18, 0, 0);
    list << Attaque(34, "Choc mental", 3, "Projète une onde psychique qui inflige des dégâts à l'adversaire peut rendre confus", 19, 0, 0);
    list << Attaque(35, "Dard-venin", 2, "Pique l'ennemi avec un dard peut empoisonner", 3, 0, 0);
    list << Attaque(36, "Furie", 10, "Attaque l'ennemi 2 à 5 fois avec un bec un dard ou des griffes", 0, 0, 0);
	list << Attaque(37, "Dard-nuée", 4, "Attaque l'ennemi avec des dards ou des épines", 0, 0, 0);
	list << Attaque(38, "Jet-de-sable", 15, "Projète du sable sur l'ennemi pour baisser sa précision", 8, 0, 0);
	list << Attaque(39, "Aeropique", 8, "Attaque rapidement l'ennemi en fonçant sur lui", 0, 0, 0);
	list << Attaque(40, "Vol", 8, "S'envole au premier tour avant de frapper au deuxième", 0, 0, 0);
	list << Attaque(41, "Vive-attaque", 10, "Charge rapidement l'ennemi", 0, 0, 0);
	list << Attaque(42, "Croc de mort", 10, "Mort l'ennemi pour lui infliger des dégâts", 0, 0, 0);
    list << Attaque(43, "Damoclès", 10, "Charge l'ennemi violemment blesse le lanceur", 0, 0, 0);
	list << Attaque(44, "Picpic", 8, "Frappe l'ennemi avec le bec", 0, 0, 0);
	list << Attaque(45, "Ligotage", 10, "Ligote l'ennemi qui subit 5 fois des dégâts", 0, 0, 0);
	
	
	

}	
