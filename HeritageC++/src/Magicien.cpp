#include "Magicien.h"

using namespace std;

Magicien::Magicien() : Personnage(), m_mana(100)
{

}

Magicien::Magicien(string nom) : Personnage(nom), m_mana(100)
{

}

Magicien::~Magicien()
{
    //dtor
}

void Magicien::sePresenter() const
{
    cout << "Je suis un magicien." << endl;
}
