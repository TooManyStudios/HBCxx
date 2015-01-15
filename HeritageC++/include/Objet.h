#ifndef OBJET_H
#define OBJET_H

#include <string>

class Objet
{
    public:
        Objet(std::string nom);
        virtual ~Objet();
        std::string &getNom();
        int getQuantite();
    protected:
    private:
        std::string m_nom;
        int m_quantite;
};

#endif // OBJET_H
