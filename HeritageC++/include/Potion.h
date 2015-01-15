#ifndef POTION_H
#define POTION_H

#include <string>
#include "Objet.h"
#include "Utilisable.h"

class Potion : public Objet, public Utilisable
{
    public:
        Potion(std::string nom, int pointsDeVie);
        virtual ~Potion();
        virtual void utiliser();
        int getPointsDeVie();
    protected:
    private:
        int m_pointsDeVie;
};

#endif // POTION_H
