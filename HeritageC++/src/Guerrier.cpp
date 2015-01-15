#include "Guerrier.h"

#include <iostream>

using namespace std;

Guerrier::Guerrier() : Personnage()
{

}

Guerrier::Guerrier(string nom) : Personnage(nom)
{

}

Guerrier::~Guerrier()
{
    //dtor
}

void Guerrier::sePresenter() const
{
    cout << "Je suis un guerrier." << endl;
}
