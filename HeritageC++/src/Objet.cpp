#include "Objet.h"

using namespace std;

Objet::Objet(std::string nom) : m_nom(nom), m_quantite(1)
{
}

Objet::~Objet()
{
}

std::string &Objet::getNom()
{
    return m_nom;
}

int Objet::getQuantite()
{
    return m_quantite;
}
