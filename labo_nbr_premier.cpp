#include <iostream>

using namespace std;

int main(){

	char repeat;

	//-------------------- introduction --------------------
	//Présenter le programme
	cout << "Ce programme permet d'afficher les nombres premiers sous forme de tableau" << endl << endl;

	do{
	//-------------------- Saisi des valeurs --------------------
	int limit;
	do{
		cout << "entrer un valeur [2-1'000] : ";
		cin >> limit; //Récupérer la limite des valeurs à afficher

	} while(limit < 2 || limit > 1'000); //Si faux répéter la question


	//-------------------- Affichage tableau --------------------

		int nbr = 2, colonne = 0;
		//cout << "  ";// Pour que la premirère ligne sois bien aligner

		while(nbr <= limit){		//Première boucle crée les saut de ligne
			while(nbr <= limit && colonne < 5){		//Deuxième boucle affiche le nbr premier
				if(nbr%2 != 0 && nbr%3 != 0 && nbr%5 != 0 && nbr%7 != 0 && nbr%11 != 0 ||
					nbr == 2 || nbr == 3 || nbr == 5 || nbr == 7 || nbr == 11){
					cout <<  '\t' << nbr << " ";
					++colonne;
				}
				++nbr;		//passe à la valeur suivante
			}
			colonne = 0;
			cout << endl;	//Crée une autre ligne;
		}

		do{
			cout << "Voulez-vous recommencer [O/N] : ";
			cin >> repeat;		//Récupérer la lettre demander
		}while(repeat != 'N' && repeat != 'O');//Si autre redemander le caractère

	}while(repeat == 'O');//Quitter / recommencer

	cout << "Fin de programme";
}