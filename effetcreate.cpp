#include "effetcreate.h"
#include <QList>

//Constructeur par défaut

EffetCreate::EffetCreate(){
	
}

//Fonction permettant de remplir la liste des effets pour les pokémon de la première génération, par soucis de temps, celle-ci n'est pas complète

void EffetCreate::createListEffet(QList<Effet> &list){
	
    list << Effet(0, "En développement...", "");
	list << Effet(1, "DefenseDown", "Baisse la défense");
	list << Effet(2, "Engrais", "Augmente la puissance des attaques de type plante à moins de 10% des HP");
	list << Effet(3, "Empoisonnement", "Le Pokémon est empoisonné et perd des HP tous les tours");
	list << Effet(4, "Paralysie", "Le Pokémon ne peut plus bouger et ne peut donc plus attaquer");
	list << Effet(5, "AttaqueDown", "Baisse l'attaque");
	list << Effet(6, "Brasier", "Augmente la puissance des attaques de type feu à moins de 10% des HP");
	list << Effet(7, "Brulure", "Le Pokémon est brulé et perd des HP tous les tours");
	list << Effet(8, "PrecisionDown", "Baisse la précision");
	list << Effet(9, "Torrent", "Augmente la puissances des attaques de type eau à moins de 10% des HP");
	list << Effet(10, "VitesseDown", "Baisse la vitesse");
	list << Effet(11, "DefenseUp", "Augmente la défense");
	list << Effet(12, "Appeuré", "Le Pokémon est appeuré et ne peut attaquer ce tour-ci");
	list << Effet(13, "Gelé", "Le Pokémon est gelé et ne peut attaquer pour les 5 prochains tours");
	list << Effet(14, "K.O. en un coup", "Le Pokémon est K.O. en une seule attaque");
	list << Effet(15, "Fuite", "Fuit à coup sûr d'un combat avec un Pokémon sauvage");
	list << Effet(16, "Mue", "Le Pokémon perd sa peau pour soigner un statut");
	list << Effet(17, "Oeil composé", "La précision est augmentée de 30%");
	list << Effet(18, "Sommeil", "Le Pokémon dort et ne peut attaquer pour les 5 prochains tours");
    list << Effet(19, "Confusion", "Le Pokémon est confus pour 3 tours il a 50% de chances de rater son attaque et de s'infliger des dégâts");
	list << Effet(20, "Essaim", "Augmente de 50% la puissance des capacités de type insecte à moins de 33% des HP");
	list << Effet(21, "Regard vif", "Ne peut pas perdre de précision");
	
	
}
