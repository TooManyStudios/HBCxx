#include <iostream>
using namespace std;

#include "Personnage.h"

int main()
{
    cout << "RPG Combat" << endl;

    Personnage david("David"), goliath("Goliath");
    Personnage bruno("Bruno"); bruno = david;

    cout << "D: " << david << endl;
    cout << "G: " << goliath << endl;
    cout << "B: " << bruno << endl;

    david.attaquer(goliath);
    goliath.attaquer(david);
    david.attaquer(goliath);


    cout << "D: " << david << endl;
    cout << "G: " << goliath << endl;
    cout << "B: " << bruno << endl;


    /*if (david == goliath)
        cout << "David == Goliath" << endl;*/

    return 0;
}
