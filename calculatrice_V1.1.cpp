/*CALCULATRICE Version 1.1
 * VALIDÉ*/

#include <iostream>
#include <iomanip>
using namespace std;

//IL SUFFIT DE SAISIR L'operation

int main()
{
	cout << setfill('-') << setw(20) << "Bonjour" ;
	cout << " Bienvenue dans ma calculatrice V 1.1 " << setw(20) << " " << endl;
	
	cout << "1. Pour effectuer un calcul \n";
	cout << "2. Quitter le programme \n";
	cout << "\n\n";
	int reponse1;
	cin >> reponse1;
	
	if (reponse1 == 1)
	{
	
		bool rep;
		do
		{
			char operateur;
			double nombre1, nombre2;
			cout << "Entrez votre calcul =";
			cin >> nombre1;
			//cout << "l'operateur =";
			cin >> operateur;
			//cout << "Entrez votre calcul =";
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
			
			cout << "\n\n";
			cout << "1. Pour recommancer un calcul \n";
			cout << "2. Quitter le programme \n";
			cout << "\n\n";
			int reponse;
			cin >> reponse;
			if (reponse == 1) 
			{
				rep=false;
			} 
			else
			{
				rep=true;
			}
			cout << "\n";
		} while(rep != true);
		
	}
	cout << "\n Merci d'avoir utilisé mon programme \n          A bientôt " << endl;
    return 0;
}

