#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
    public:
        Personnage();
        Personnage(std::string nom);
        virtual ~Personnage();
        virtual void sePresenter() const;
        void recevoirDegats(int degats);
        void coupDePoing(Personnage &cible) const;

    private:
        int m_vie;
        std::string m_nom;
};

void presenterPerso(Personnage const &p);

#endif
