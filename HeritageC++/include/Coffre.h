#ifndef COFFRE_H
#define COFFRE_H

#include <vector>
class Objet;

class Coffre
{
    public:
        Coffre();
        virtual ~Coffre();
        int getNbObjets();
        void ajouterObjet(Objet *);
    protected:
    private:
        std::vector<Objet *> m_objets;
};

#endif // COFFRE_H
