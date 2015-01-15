#include "Arme.h"

#include <iostream>

using namespace std;

Arme::Arme(string nom, int puissance) : Objet(nom), m_puissance(puissance)
{
    //ctor
}

Arme::~Arme()
{
    //dtor
}

void Arme::utiliser()
{
    cout << "Utilisation de l'arme" << endl;
}

int Arme::getPuissance()
{
    return m_puissance;
}
