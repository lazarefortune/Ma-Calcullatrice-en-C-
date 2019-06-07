#include <iostream>

using namespace std;

//IL SUFFIT DE SAISIR L'operation

int main()
{
    char operateur;
    double nombre1, nombre2;
    /*cout << 1 << " " << 2 << " " << 3  << endl;
    cout << 4 << " " << 5 << " " << 6  << endl;
    cout << 7 << " " << 8 << " " << 9  << endl;*/
    cout << "Entrez un nombre =";
    cin >> nombre1;
    cout << "l'operateur =";
    cin >> operateur;
    cout << "Entrez un nombre =";
    cin >> nombre2;
    cout << endl;

    switch(operateur)
    {
        case '+' :
            cout << "la somme est :" << nombre1+nombre2;
            break;
        case '-' :
            cout << " la différence est :" << nombre1-nombre2;
            break;
        case '*' :
            cout << "le produit est :" << nombre1*nombre2;
            break;
        case '/' :
            cout << "le quotient est :" << nombre1/nombre2;
            break;
        default:
            cout << "Erreur d'opérateur";
    }



    return 0;
}
