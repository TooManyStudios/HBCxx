#include <iostream>

using namespace std;

void afficherMenu();

int main()
{
    afficherMenu();
    return 0;
}

void afficherMenu()
{
    int choix; bool quitter = false;
    cout << endl;
    cout << "0 - Quitter" << endl;
    cout << "1 - Action 1" << endl;
    cout << "2 - Action 2" << endl;
    cout << "Votre choix : ";
    cin >> choix;
    switch (choix)
    {
    case 0:
        quitter = true;
        break;
    case 1:
        cout << endl << "execution action 1..." << endl;
        break;
    case 2:
        cout << endl << "execution action 2..." << endl;
        break;
    default :
        cout << "Choix non valide." << endl;
    }
    if (quitter)
    {
        cout << "Bye bye." << endl;
    }
    else
    {
        afficherMenu();
    }
}
