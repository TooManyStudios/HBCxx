#include "Potion.h"

#include <iostream>

using namespace std;

Potion::Potion(string nom, int pointsDeVie) : Objet(nom), m_pointsDeVie(pointsDeVie)
{
    //ctor
}

Potion::~Potion()
{
    //dtor
}

void Potion::utiliser()
{
    cout << "Utilisation de la potion" << endl;
}

int Potion::getPointsDeVie()
{
    return m_pointsDeVie;
}
