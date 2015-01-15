#include "Personnage.h"

#include <iostream>

using namespace std;


Personnage::Personnage() :
    m_nom("Defaut"),
    m_vie(100),
    m_arme(new Arme())
{

}

Personnage::Personnage(string nom) :
    m_nom(nom),
    m_vie(100),
    m_arme(new Arme())
{

}

Personnage::Personnage(Personnage const& persoACopier) :
    m_nom(persoACopier.m_nom),
    m_vie(persoACopier.m_vie),
    m_arme(new Arme(*(persoACopier.m_arme)))
{

}


Personnage::~Personnage()
{
    if (m_arme) delete m_arme;
    cout << "Personnage " << m_nom << " a ete detruit." << endl;
}


void Personnage::attaquer(Personnage &cible) {
    cout << m_nom << " attaque " << cible.getNom() << endl;
    cible.recevoirDegats(m_arme->getDegats());
}

void Personnage::recevoirDegats(int degats) {
    cout << m_nom << " recoit " << degats << " degats." << endl;
    m_vie -= degats;
    if (m_vie<0)
        m_vie = 0;
}

void Personnage::afficher(ostream &flux) const {
    flux << m_nom << " : " << endl;
    flux << "   vie : " << m_vie << endl;
    flux << "   arme : " << m_arme->getNom() << "[" << m_arme->getDegats() << "]" << endl;
}

string Personnage::getNom() const {
    return m_nom;
}

bool Personnage::isVivant() const {
    return m_vie > 0;
}

Personnage & Personnage::operator=(Personnage const &persoACopier)
{
    if (this != &persoACopier)
    {
        m_nom = persoACopier.m_nom;
        m_vie = persoACopier.m_vie;
        if (m_arme) delete m_arme;
        m_arme = new Arme(persoACopier.m_arme);
    }
    return *this;
}

ostream &operator<<( ostream &flux, Personnage const &p)
{
    p.afficher(flux) ;
    return flux;
}
