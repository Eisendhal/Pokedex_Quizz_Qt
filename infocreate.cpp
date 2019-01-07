#include "infocreate.h"
#include <QList>
#include <QString>

//Constructeur par défaut

InfoCreate::InfoCreate(){

}

//Fonction permettant de remplir une liste d'informations correspondant aux pokémon de la première génération, toutes les informations ne sont pas complétées par soucis de temps, mais chaque pokémon a une InfoPokemon associée


void InfoCreate::createListInfo(QList<InfoPokemon> &list)
{

	
    list << InfoPokemon(1 /*id*/, 1/*idtype1*/, 2/*idtype2*/, 1/*idatk1*/, 2/*idatk2*/, 0/*idatk3*/, 0/*idatk4*/, 1/*gen*/, "Labo du prof Chen"/*lieu*/, QString("Herbizarre"), QString("Florizarre"), QString("")/*tableau des évolutions*/, 2/*ideffet*/ );
    list << InfoPokemon(2, 1, 2, 1, 3, 4, 5, 1, "Evolution de Bulbizarre", "Florizarre", "", "", 2);
    list << InfoPokemon(3, 1, 2, 6, 7, 8, 9, 1, "Evolution de Herbizarre", "", "", "", 2);
    list << InfoPokemon(4, 7, 0, 10, 11, 0, 0, 1, "Labo du prof Chen", "Reptincel", "Dracaufeu", "", 6);
    list << InfoPokemon(5, 7, 0, 10, 12, 13, 14, 1, "Evolution de Salamèche", "Dracaufeu", "", "", 6);
    list << InfoPokemon(6, 7, 8, 15, 16, 17, 18, 1, "Evolution de Reptincel", "", "", "", 6);
    list << InfoPokemon(7, 5, 0, 19, 20, 0, 0, 1, "Labo du prof Chen", "Carabaffe", "Tortank", "", 9);
    list << InfoPokemon(8, 5, 0, 21, 22, 23, 24, 1, "Evolution de Carapuce", "Tortank", "", "", 9);
    list << InfoPokemon(9, 5, 0, 25, 26, 27, 28, 1, "Evolution de Carabaffe", "", "", "", 9);
    list << InfoPokemon(10, 4, 0, 1, 29, 0, 0, 1, "Forêt de Jade", "Chrysacier", "Papilusion", "", 15);
    list << InfoPokemon(11, 4, 0, 30, 0, 0, 0, 1, "Forêt de Jade", "Papilusion", "", "", 16);
    list << InfoPokemon(12, 4, 8, 31, 32, 33, 34, 1, "Evolution de Chrysacier", "", "", "", 17);
    list << InfoPokemon(13, 4, 2, 35, 29, 0, 0, 1, "Forêt de Jade", "Coconfort", "Dardargnan", "", 15);
    list << InfoPokemon(14, 4, 2, 30, 0, 0, 0, 1, "Forêt de Jade", "Dardargnan", "", "", 16);
    list << InfoPokemon(15, 4, 2, 36, 35, 37, 0, 1, "Evolution de Coconfort", "", "", "", 20);
    list << InfoPokemon(16, 10, 8, 1, 38, 0, 0, 1, "Route 1", "Roucoups", "Roucarnage", "", 21);
    list << InfoPokemon(17, 10, 8, 41, 38, 31, 16, 1, "Route 14", "Roucarnage", "", "", 21);
    list << InfoPokemon(18, 10, 8, 16, 39, 40, 41, 1, "Evolution de Roucoups", "", "", "", 21);
    list << InfoPokemon(19, 10, 1, 20, 0, 0, 1, 1, "Route 1", "Rattatac", "", "", 15);
    list << InfoPokemon(20, 10, 0, 42, 41, 43, 1, 1, "Route 16", "", "", "", 15);
    list << InfoPokemon(21, 10, 8, 44, 11, 0, 0, 1, "Route 3", "Rapasdepic", "", "", 21);
    list << InfoPokemon(22, 10, 8, 44, 39, 36, 40, 1, "Route 17", "", "", "", 21);
    list << InfoPokemon(23, 2, 0, 35, 2, 45, 0, 1, "Route 4", "Arbok", "", "", 16);
    list << InfoPokemon(24, 2, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(25, 14, 0, 0, 0, 0, 0, 1, "Forêt de Jade", "Raichu", "", "", 4);
    list << InfoPokemon(26, 14, 0, 0, 0, 0, 0, 1, "", "", "", "", 4);
    list << InfoPokemon(27, 15, 0, 0, 0, 0, 0, 1, "", "Sablaireau", "", "", 0);
    list << InfoPokemon(28, 15, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(29, 2, 0, 0, 0, 0, 0, 1, "", "Nidorina", "Nidoqueen", "", 0);
    list << InfoPokemon(30, 2, 0, 0, 0, 0, 0, 1, "", "Nidoqueen", "", "", 0);
    list << InfoPokemon(31, 2, 15, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(32, 2, 0, 0, 0, 0, 0, 1, "", "Nidorino", "Nidoking", "", 0);
    list << InfoPokemon(33, 2, 0, 0, 0, 0, 0, 1, "", "Nidoking", "", "", 0);
    list << InfoPokemon(34, 2, 15, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(35, 10, 0, 0, 0, 0, 0, 1, "Mont Sélénite", "Mélodelfe", "", "", 0);
    list << InfoPokemon(36, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(37, 7, 0, 0, 0, 0, 0, 1, "Manoir Pokémon", "Feunard", "", "", 0);
    list << InfoPokemon(38, 7, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(39, 10, 0, 0, 0, 0, 0, 1, "", "Grodoudou", "", "", 0);
    list << InfoPokemon(40, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(41, 2, 8, 0, 0, 0, 0, 1, "Mont Sélénite", "Nosferalto", "", "", 0);
    list << InfoPokemon(42, 2, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(43, 1, 2, 0, 0, 0, 0, 1, "", "Ortide", "Rafflesia", "", 0);
    list << InfoPokemon(44, 1, 2, 0, 0, 0, 0, 1, "", "Rafflesia", "", "", 0);
    list << InfoPokemon(45, 1, 2, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(46, 4, 1, 0, 0, 0, 0, 1, "Mont Sélénité", "Parasect", "", "", 0);
    list << InfoPokemon(47, 4, 1, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(48, 2, 4, 0, 0, 0, 0, 1, "", "Aéromite", "", "", 0);
    list << InfoPokemon(49, 2, 4, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(50, 15, 0, 0, 0, 0, 0, 1, "", "Triopikeur", "", "", 0);
    list << InfoPokemon(51, 15, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(52, 10, 0, 0, 0, 0, 0, 1, "", "Persian", "", "", 0);
    list << InfoPokemon(53, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(54, 5, 0, 0, 0, 0, 0, 1, "", "Akwakwak", "", "", 0);
    list << InfoPokemon(55, 5, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(56, 11, 0, 0, 0, 0, 0, 1, "", "Colossinge", "", "", 0);
    list << InfoPokemon(57, 11, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(58, 7, 0, 0, 0, 0, 0, 1, "", "Arcanin", "", "", 0);
    list << InfoPokemon(59, 7, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(60, 5, 0, 0, 0, 0, 0, 1, "", "Tétarte", "Tartard", "", 0);
    list << InfoPokemon(61, 5, 0, 0, 0, 0, 0, 1, "", "Tartard", "", "", 0);
    list << InfoPokemon(62, 5, 11, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(63, 3, 0, 0, 0, 0, 0, 1, "", "Kadabra", "Alakazam", "", 0);
    list << InfoPokemon(64, 3, 0, 0, 0, 0, 0, 1, "", "Alakazam", "", "", 0);
    list << InfoPokemon(65, 3, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(66, 11, 0, 0, 0, 0, 0, 1, "", "Machopeur", "Mackogneur", "", 0);
    list << InfoPokemon(67, 11, 0, 0, 0, 0, 0, 1, "", "Mackogneur", "", "", 0);
    list << InfoPokemon(68, 11, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(69, 1, 2, 0, 0, 0, 0, 1, "", "Boustiflor", "Empiflor", "", 0);
    list << InfoPokemon(70, 1, 2, 0, 0, 0, 0, 1, "", "Empiflor", "", "", 0);
    list << InfoPokemon(71, 1, 2, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(72, 5, 2, 0, 0, 0, 0, 1, "", "Tentacruel", "", "", 0);
    list << InfoPokemon(73, 5, 2, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(74, 6, 15, 0, 0, 0, 0, 1, "", "Gravalanch", "Grolem", "", 0);
    list << InfoPokemon(75, 6, 15, 0, 0, 0, 0, 1, "", "Grolem", "", "", 0);
    list << InfoPokemon(76, 6, 15, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(77, 7, 0, 0, 0, 0, 0, 1, "", "Galopa", "", "", 0);
    list << InfoPokemon(78, 7, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(79, 5, 3, 0, 0, 0, 0, 1, "", "Flagadoss", "", "", 0);
    list << InfoPokemon(80, 5, 3, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(81, 14, 0, 0, 0, 0, 0, 1, "", "Magnéton", "", "", 0);
    list << InfoPokemon(82, 14, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(83, 10, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(84, 10, 8, 0, 0, 0, 0, 1, "", "Dodrio", "", "", 0);
    list << InfoPokemon(85, 10, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(86, 5, 0, 0, 0, 0, 0, 1, "", "Lamantine", "", "", 0);
    list << InfoPokemon(87, 5, 9, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(88, 2, 0, 0, 0, 0, 0, 1, "", "Grotadmorv", "", "", 0);
    list << InfoPokemon(89, 2, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(90, 5, 0, 0, 0, 0, 0, 1, "", "Crustabri", "", "", 0);
    list << InfoPokemon(91, 5, 9, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(92, 13, 2, 0, 0, 0, 0, 1, "Tour de Lavanville", "Spectrum", "Ectoplasma", "", 0);
    list << InfoPokemon(93, 13, 2, 0, 0, 0, 0, 1, "Tour de Lavanville", "Ectoplasma", "", "", 0);
    list << InfoPokemon(94, 13, 2, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(95, 6, 15, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(96, 3, 0, 0, 0, 0, 0, 1, "", "Hypnomade", "", "", 0);
    list << InfoPokemon(97, 3, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(98, 5, 0, 0, 0, 0, 0, 1, "", "Krabboss", "", "", 0);
    list << InfoPokemon(99, 5, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(100, 14, 0, 0, 0, 0, 0, 1, "Centrale", "Electrode", "", "", 0);
    list << InfoPokemon(101, 14, 0, 0, 0, 0, 0, 1, "Centrale", "", "", "", 0);
    list << InfoPokemon(102, 1, 3, 0, 0, 0, 0, 1, "", "Noadkoko", "", "", 0);
    list << InfoPokemon(103, 1, 3, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(104, 15, 0, 0, 0, 0, 0, 1, "", "Ossatueur", "", "", 0);
    list << InfoPokemon(105, 15, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(106, 11, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(107, 11, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(108, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(109, 2, 0, 0, 0, 0, 0, 1, "", "Smogogo", "", "", 0);
    list << InfoPokemon(110, 2, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(111, 6, 15, 0, 0, 0, 0, 1, "", "Rhinoféros", "", "", 0);
    list << InfoPokemon(112, 6, 15, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(113, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(114, 1, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(115, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(116, 5, 0, 0, 0, 0, 0, 1, "", "Hypocéan", "", "", 0);
    list << InfoPokemon(117, 5, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(118, 5, 0, 0, 0, 0, 0, 1, "", "Poissoroy", "", "", 0);
    list << InfoPokemon(119, 5, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(120, 5, 0, 0, 0, 0, 0, 1, "", "Staross", "", "", 0);
    list << InfoPokemon(121, 5, 3, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(122, 3, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(123, 4, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(124, 9, 3, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(125, 14, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(126, 7, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(127, 4, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(128, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(129, 5, 0, 0, 0, 0, 0, 1, "", "Léviator", "", "", 0);
    list << InfoPokemon(130, 5, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(131, 5, 9, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(132, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(133, 10, 0, 0, 0, 0, 0, 1, "", "Aquali", "Voltali", "Pyroli", 0);
    list << InfoPokemon(134, 5, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(135, 14, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(136, 7, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(137, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(138, 6, 5, 0, 0, 0, 0, 1, "", "Amonistar", "", "", 0);
    list << InfoPokemon(139, 6, 5, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(140, 6, 5, 0, 0, 0, 0, 1, "", "Kabutops", "", "", 0);
    list << InfoPokemon(141, 6, 5, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(142, 6, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(143, 10, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(144, 9, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(145, 14, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(146, 7, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(147, 12, 0, 0, 0, 0, 0, 1, "", "Draco", "Dracolosse", "", 0);
    list << InfoPokemon(148, 12, 0, 0, 0, 0, 0, 1, "", "Dracolosse", "", "", 0);
    list << InfoPokemon(149, 12, 8, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(150, 3, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);
    list << InfoPokemon(151, 3, 0, 0, 0, 0, 0, 1, "", "", "", "", 0);

	
	
}

