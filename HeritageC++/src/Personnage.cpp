#include "Personnage.h"

#include <iostream>

using namespace std;

Personnage::Personnage() : m_vie(100), m_nom("Personne")
{

}

Personnage::Personnage(string nom) : m_vie(100), m_nom(nom)
{

}

Personnage::~Personnage()
{

}

void Personnage::sePresenter() const
{
    cout << "Je suis un personnage." << endl;
}

void Personnage::recevoirDegats(int degats)
{
    m_vie -= degats;
}

void Personnage::coupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(10);
}

void presenterPerso(Personnage const &p)
{
    p.sePresenter();
}
