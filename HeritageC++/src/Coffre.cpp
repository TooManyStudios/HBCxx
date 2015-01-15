#include "Coffre.h"

#include "Objet.h"
#include <iostream>

using namespace std;

Coffre::Coffre()
{
    //ctor
}

Coffre::~Coffre()
{
    //dtor
}

int Coffre::getNbObjets()
{
    return m_objets.size();
}

void Coffre::ajouterObjet(Objet *objet)
{
    m_objets.push_back(objet);
}

