#include <iostream>

using namespace std;

const int colonne_max = 5;
const int nombre_min = 2;
const int nombre_max = 1'000;

int main(){

	char repeat; //Variable pour répéter le programme

	//-------------------- introduction --------------------
	//Présenter le programme
	cout << "Ce programme permet d'afficher les nombres premiers sous forme de tableau" << endl << endl;

	do{
	//-------------------- Saisi des valeurs --------------------
	int limit;
	do{
		cout << "entrer un valeur [2-1'000] : ";
		cin >> limit; //Récupérer la limite des valeurs à afficher

	} while(limit < nombre_min || limit > nombre_max); //répéter la question si vrai


	//-------------------- Affichage tableau --------------------

		int nbr = 2, colonne = 0;
		while(nbr <= limit){		//Première boucle crée les sauts de ligne
			while(nbr <= limit && colonne < colonne_max){	//Deuxième boucle test et affiche le nbr premier
				for(int i = 2; i <= nbr; ++i){	//boucle pour tester nbr
					if(i == nbr){				//nbr est un nombre premier
						cout <<  '\t' << nbr << " ";
						++colonne;
					}
					else if(nbr%i == 0){		//nbr n'est pas un nombre premier
						break;
					}
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