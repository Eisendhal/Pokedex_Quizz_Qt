#include "pokemoncreate.h"
#include "pokemon.h"
#include <QList>
#include <QIcon>

//Constructeur par défaut

PokemonCreate::PokemonCreate()
{		
}

//Fonction permettant de remplir une liste de Pokemon avec les pokémon de la première génération leurs id et une image associée

void PokemonCreate::createListPokemon(QList<Pokemon> &list)
{
    QIcon image;
    image = QIcon("://PetiteImage/non_creee.png");


    list << Pokemon(23, 1, "Abo", 23, "://PetiteImage/abo.png");
	list << Pokemon(63, 2, "Abra", 63, "://PetiteImage/abra.png");
	list << Pokemon(49, 3, "Aéromite", 49, "://PetiteImage/aeromite.png");
	list << Pokemon(55, 4, "Akwakwak", 55, "://PetiteImage/akwakwak.png");
	list << Pokemon(65, 5, "Alakazam", 65, "://PetiteImage/alakazam.png");
	list << Pokemon(139, 6, "Amonistar", 139, "://PetiteImage/amonistar.png");
	list << Pokemon(138, 7 , "Amonita", 138, "://PetiteImage/amonita.png");
	list << Pokemon(134, 8, "Aquali", 134, "://PetiteImage/aquali.png");
	list << Pokemon(24, 9, "Arbok", 24, "://PetiteImage/arbok.png");
	list << Pokemon(59, 10, "Arcanin", 59, "://PetiteImage/arcanin.png");
	list << Pokemon(144, 11, "Artikodin", 144, "://PetiteImage/artikodin.png");
	list << Pokemon(13, 12, "Aspicot", 13, "://PetiteImage/aspicot.png");
	list << Pokemon(70, 13, "Boustiflor", 70, "://PetiteImage/boustiflor.png");
    list << Pokemon(1, 14, "Bulbizarre",1,"://PetiteImage/bulbizarre.png");
	list << Pokemon(83, 15, "Canarticho", 83, "://PetiteImage/canarticho.png");
	list << Pokemon(58, 16, "Caninos", 58, "://PetiteImage/caninos.png");
    list << Pokemon(8, 17, "Carabaffe", 8, "://PetiteImage/carabaffe.png");
    list << Pokemon(7, 18, "Carapuce", 7, "://PetiteImage/carapuce.png");
	list << Pokemon(10, 19, "Chenipan", 19, "://PetiteImage/chenipan.png");
    list << Pokemon(69, 20, "Chetiflor", 69, "://PetiteImage/chetiflor.png");
    list << Pokemon(11, 21, "Chrysacier", 11, "://PetiteImage/chrysacier.png");
	list << Pokemon(14, 22, "Coconfort", 14, "://PetiteImage/coconfort.png");
	list << Pokemon(57, 23, "Colossinge", 57, "://PetiteImage/colossinge.png");
	list << Pokemon(91, 24, "Crustabri", 91, "://PetiteImage/crustabri.png");
    list << Pokemon(15, 25, "Dardargnan", 15, "://PetiteImage/dardargnan.png");
	list << Pokemon(85, 26, "Dodrio", 85, "://PetiteImage/dodrio.png");
	list << Pokemon(84, 27, "Doduo", 84, "://PetiteImage/doduo.png");
    list << Pokemon(6, 28, "Dracaufeu", 6, "://PetiteImage/dracaufeu.png");
	list << Pokemon(148, 29, "Draco", 148, "://PetiteImage/draco.png");
	list << Pokemon(149, 30, "Dracolosse", 149, "://PetiteImage/dracolosse.png");
	list << Pokemon(94, 31, "Ectoplasma", 94, "://PetiteImage/ectoplasma.png");
    list << Pokemon(145, 32, "Electhor", 145, "://PetiteImage/electhor.png");
    list << Pokemon(101, 33, "Electrode", 101, "://PetiteImage/electrode.png");
	list << Pokemon(125, 34, "Elektek", 125, "://PetiteImage/elektek.png");
	list << Pokemon(71, 35, "Empiflor", 71, "://PetiteImage/empiflor.png");
    list << Pokemon(133, 36, "Evoli", 133, "://PetiteImage/evoli.png");
	list << Pokemon(108, 37, "Excelangue", 108, "://PetiteImage/excelangue.png");
	list << Pokemon(92, 38, "Fantominus", 92, "://PetiteImage/fantominus.png");
	list << Pokemon(56, 39, "Férosinge", 56, "://PetiteImage/ferosinge.png");
	list << Pokemon(38, 40, "Feunard", 38, "://PetiteImage/feunard.png");
	list << Pokemon(80, 41, "Flagadoss", 80, "://PetiteImage/flagadoss.png");
    list << Pokemon(3, 42, "Florizarre", 3, ":/PetiteImage/florizarre.png");
	list << Pokemon(78, 43, "Galopa", 78, "://PetiteImage/galopa.png");
	list << Pokemon(37, 44, "Goupix", 37, "://PetiteImage/goupix.png");
	list << Pokemon(75, 45, "Gravalanch", 75, "://PetiteImage/gravalanch.png");
	list << Pokemon(40, 46, "Grodoudou", 40, "://PetiteImage/grodoudou.png");
	list << Pokemon(76, 47, "Grolem", 76, "://PetiteImage/grolem.png");
    list << Pokemon(87, 48, "Grotadmorv", 87, "://PetiteImage/grotadmorv.png");
    list << Pokemon(2, 49, "Herbizarre", 2, ":/PetiteImage/herbizarre.png");
	list << Pokemon(97, 50, "Hypnomade", 97, "://PetiteImage/hypnomade.png");
	list << Pokemon(117, 51, "Hypocéan", 117, "://PetiteImage/hypocean.png");
	list << Pokemon(116, 52, "Hypotrempe", 116, "://PetiteImage/hypotrempe.png");
	list << Pokemon(123, 53, "Insécateur", 123, "://PetiteImage/insecateur.png");
	list << Pokemon(140, 54, "Kabuto", 140, "://PetiteImage/kabuto.png");
    list << Pokemon(141, 55, "Kabutops", 141, "://PetiteImage/kabutops.png");
    list << Pokemon(64, 56, "Kadabra", 64, "://PetiteImage/kadabra.png");
    list << Pokemon(115, 57, "Kangourex", 115, "://PetiteImage/kangourex.png");
    list << Pokemon(106, 58, "Kicklee", 106, "://PetiteImage/kicklee.png");
    list << Pokemon(90, 59, "Kokiyas", 90, "://PetiteImage/kokiyas.png");
    list << Pokemon(99, 60, "Krabboss", 99, "://PetiteImage/krabboss.png");
    list << Pokemon(98, 61, "Krabby", 98, "://PetiteImage/krabby.png");
    list << Pokemon(89, 62, "Lamantine", 89, "://PetiteImage/lamantine.png");
    list << Pokemon(113, 63, "Leveinard", 113, "://PetiteImage/leveinard.png");
    list << Pokemon(130, 64, "Léviator", 130, "://PetiteImage/leviator.png");
    list << Pokemon(124, 65, "Lippoutou", 124, "://PetiteImage/lippoutou.png");
    list << Pokemon(131, 66, "Lokhlass", 131, "://PetiteImage/lokhlass.png");
    list << Pokemon(122, 67, "M. Mime", 122, "://PetiteImage/mmime.png");
    list << Pokemon(66, 68, "Machoc", 66, "://PetiteImage/machoc.png");
    list << Pokemon(67, 69, "Machopeur", 67, "://PetiteImage/machopeur.png");
    list << Pokemon(68, 70, "Mackogneur", 68, "://PetiteImage/mackogneur.png");
    list << Pokemon(129, 71, "Magicarpe", 128, "://PetiteImage/magicarpe.png");
    list << Pokemon(126, 72, "Magmar", 126, "://PetiteImage/magmar.png");
    list << Pokemon(81, 73, "Magnéti", 81, "://PetiteImage/magneti.png");
    list << Pokemon(82, 74, "Magnéton", 82, "://PetiteImage/magneton.png");
    list << Pokemon(36, 75, "Mélodelfe", 36, "://PetiteImage/melodelfe.png");
    list << Pokemon(35, 76, "Mélofée", 35, "://PetiteImage/melofee.png");
    list << Pokemon(132, 77, "Métamorph", 132, "://PetiteImage/metamorph.png");
    list << Pokemon(151, 78, "Mew", 151, "://PetiteImage/mew.png");
    list << Pokemon(150, 79, "Mewtwo", 150, "://PetiteImage/mewtwo.png");
    list << Pokemon(52, 80, "Miaouss", 52, "://PetiteImage/miaouss.png");
    list << Pokemon(48, 81, "Mimitoss", 48, "://PetiteImage/mimitoss.png");
    list << Pokemon(147, 82, "Minidraco", 147, "://PetiteImage/minidraco.png");
    list << Pokemon(43, 83, "Mystherbe", 43, "://PetiteImage/mystherbe.png");
    list << Pokemon(34, 84, "Nidoking", 34, "://PetiteImage/nidoking.png");
    list << Pokemon(31, 85, "Nidoqueen", 31, "://PetiteImage/nidoqueen.png");
    list << Pokemon(29, 86, "Nidoran F", 29, "://PetiteImage/nidoranF.png");
    list << Pokemon(32, 87, "Nidoran M", 32, "://PetiteImage/nidoranM.png");
    list << Pokemon(30, 88, "Nidorina", 30, "://PetiteImage/nidorina.png");
    list << Pokemon(33, 89, "Nidorino", 33, "://PetiteImage/nidorino.png");
    list << Pokemon(103, 90, "Noadkoko", 103, "://PetiteImage/noadkoko.png");
    list << Pokemon(42, 91, "Nosferalto", 42, "://PetiteImage/nosferalto.png");
    list << Pokemon(41, 92, "Nosferapti", 41, "://PetiteImage/nosferapti.png");
    list << Pokemon(102, 93, "Noeunoeuf", 102, "://PetiteImage/noeunoeuf.png");
    list << Pokemon(95, 94, "Onix", 95, "://PetiteImage/onix.png");
    list << Pokemon(44, 95, "Ortide", 44, "://PetiteImage/ortide.png");
    list << Pokemon(105, 96, "Ossatueur", 105, "://PetiteImage/ossatueur.png");
    list << Pokemon(104, 97, "Osselait", 104, "://PetiteImage/osselait.png");
    list << Pokemon(88, 98, "Otaria", 88, "://PetiteImage/otaria.png");
    list << Pokemon(12, 99, "Papilusion", 12, "://PetiteImage/papilusion.png");
    list << Pokemon(46, 100, "Paras", 46, "://PetiteImage/paras.png");
    list << Pokemon(47, 101, "Parasect", 47, "://PetiteImage/parasect.png");
    list << Pokemon(53, 102, "Persian", 53, "://PetiteImage/persian.png");
    list << Pokemon(21, 103, "Piafabec", 21, "://PetiteImage/piafabec.png");
    list << Pokemon(25, 104, "Pikachu", 25, "://PetiteImage/pikachu.png");
    list << Pokemon(118, 105, "Poissirène", 118, "://PetiteImage/poissirene.png");
    list << Pokemon(119, 106, "Poissoroy", 119, "://PetiteImage/poissoroy.png");
    list << Pokemon(77, 107, "Ponyta", 77, "://PetiteImage/ponyta.png");
    list << Pokemon(137, 108, "Porygon", 137, "://PetiteImage/porygon.png");
    list << Pokemon(54, 109, "Psykokwak", 54, "://PetiteImage/psykokwak.png");
    list << Pokemon(142, 110, "Ptéra", 142, "://PetiteImage/ptera.png");
    list << Pokemon(60, 111, "Ptitard", 60, "://PetiteImage/ptitard.png");
    list << Pokemon(136, 112, "Pyroli", 136, "://PetiteImage/pyroli.png");
    list << Pokemon(74, 113, "Racaillou", 74, "://PetiteImage/racaillou.png");
    list << Pokemon(45, 114, "Rafflesia", 45, "://PetiteImage/rafflesia.png");
    list << Pokemon(26, 115, "Raichu", 26, "://PetiteImage/raichu.png");
    list << Pokemon(79, 116, "Ramoloss", 79, "://PetiteImage/ramoloss.png");
    list << Pokemon(22, 117, "Rapasdepic", 22, "://PetiteImage/rapasdepic.png");
    list << Pokemon(19, 118, "Rattata", 19, "://PetiteImage/rattata.png");
    list << Pokemon(20, 119, "Rattatac", 20, "://PetiteImage/rattatac.png");
    list << Pokemon(5, 120, "Reptincel", 5, ":/PetiteImage/reptincel.png");
    list << Pokemon(111, 121, "Rhinocorne", 111, "://PetiteImage/rhinocorne.png");
    list << Pokemon(112, 122, "Rhinoféros", 112, "://PetiteImage/rhinoferos.png");
    list << Pokemon(39, 123, "Rondoudou", 39, "://PetiteImage/rondoudou.png");
    list << Pokemon(143, 124, "Ronflex", 143, "://PetiteImage/ronflex.png");
    list << Pokemon(18, 125, "Roucarnage", 18, "://PetiteImage/roucarnage.png");
    list << Pokemon(16, 126, "Roucool", 16, "://PetiteImage/roucool.png");
    list << Pokemon(17, 127, "Roucoups", 17, "://PetiteImage/roucoups.png");
    list << Pokemon(27, 128, "Sabelette", 27, "://PetiteImage/sabelette.png");
    list << Pokemon(28, 129, "Sablaireau", 28, "://PetiteImage/sablaireau.png");
    list << Pokemon(4, 130, "Salamèche", 4, ":/PetiteImage/salameche.png");
    list << Pokemon(114, 131, "Saquedeneu", 114, "://PetiteImage/saquedeneu.png");
    list << Pokemon(127, 132, "Scarabrute", 127, "://PetiteImage/scarabrute.png");
    list << Pokemon(109, 133, "Smogo", 109, "://PetiteImage/smogo.png");
    list << Pokemon(110, 134, "Smogogo", 110, "://PetiteImage/smogogo.png");
    list << Pokemon(96, 135, "Soporifik", 96, "://PetiteImage/soporifik.png");
    list << Pokemon(93, 136, "Spectrum", 93, "://PetiteImage/spectrum.png");
    list << Pokemon(120, 137, "Stari", 120, "://PetiteImage/stari.png");
    list << Pokemon(121, 138, "Staross", 121, "://PetiteImage/staross.png");
    list << Pokemon(146, 139, "Sulfura", 146, "://PetiteImage/sulfura.png");
    list << Pokemon(86, 140, "Tadmorv", 86, "://PetiteImage/tadmorv.png");
    list << Pokemon(62, 141, "Tartard", 62, "://PetiteImage/tartard.png");
    list << Pokemon(50, 142, "Taupiqueur", 50, "://PetiteImage/taupiqueur.png");
    list << Pokemon(128, 143, "Tauros", 128, "://PetiteImage/tauros.png");
    list << Pokemon(72, 144, "Tentacool", 72, "://PetiteImage/tentacool.png");
    list << Pokemon(73, 145, "Tentacruel", 73, "://PetiteImage/tentacruel.png");
    list << Pokemon(61, 146, "Tétarte", 61, "://PetiteImage/tetarte.png");
    list << Pokemon(9, 147, "Tortank", 9, "://PetiteImage/tortank.png");
    list << Pokemon(51, 148, "Triopikeur", 51, "://PetiteImage/triopikeur.png");
    list << Pokemon(107, 149, "Tygnon", 107, "://PetiteImage/tygnon.png");
    list << Pokemon(135, 150, "Voltali", 135, "://PetiteImage/voltali.png");
    list << Pokemon(100, 151, "Voltorbe", 100, "://PetiteImage/voltorbe.png");
	
   // return list;
	
}


