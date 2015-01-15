#include <string>
using namespace std;

#include "Arme.h"

Arme::Arme() :
    m_nom("Petite epee"),
    m_degats(7)
{
    //ctor
}

Arme::Arme(std::string nom, int degats) :
    m_nom(nom),
    m_degats(degats)
{
    //ctor
}

Arme::Arme(Arme const *arme) :
    m_nom(arme->m_nom),
    m_degats(arme->m_degats)
{

}

Arme::~Arme()
{
    //dtor
}

int Arme::getDegats() const {
    return m_degats;
}

string Arme::getNom() const {
    return m_nom;
}
