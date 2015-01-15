#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"
#include "Coffre.h"
#include "Arme.h"
#include "Potion.h"

using namespace std;

int main()
{
    Personnage p("Perso");
    Guerrier g("Guerrier");
    Magicien m("Magicien");

    cout << "Perso, Guerrier et Magicien :" << endl;
    presenterPerso(p);
    presenterPerso(g);
    presenterPerso(m);

    Coffre c;
    cout << "Nombre d'items dans coffre : " << c.getNbObjets() << endl;

    Arme a1("epee", 20), a2("couteau", 5);
    Potion p1("Potion rouge", 50), p2("Potion verte", 100);
    c.ajouterObjet(&a1);
    c.ajouterObjet(&p1);
    c.ajouterObjet(&p2);
    c.ajouterObjet(&a2);
    cout << "Nombre d'items dans coffre : " << c.getNbObjets() << endl;

    return 0;
}
