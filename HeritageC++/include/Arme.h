#ifndef ARME_H
#define ARME_H

#include <string>
#include "Objet.h"
#include "Utilisable.h"

class Arme : public Objet, public Utilisable
{
    public:
        Arme(std::string nom, int puissance);
        virtual ~Arme();
        virtual void utiliser();
        int getPuissance();
    protected:
    private:
        int m_puissance;
};

#endif // ARME_H
