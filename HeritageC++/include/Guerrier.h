#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <string>
#include "Personnage.h"

class Guerrier : public Personnage
{
    public:
        Guerrier();
        Guerrier(std::string nom);
        virtual ~Guerrier();
        void sePresenter() const;
        void frapperAvecUnMarteau() const;
};

#endif
