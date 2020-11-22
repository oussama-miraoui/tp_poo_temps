#include<iostream>
#include "Temps.h"
#include <string>
using namespace std;

int main() {
	Temps temps;
	//get time from user
	cout << "Entrer une heure";
	cin >> temps;

	//user choice
	char choix = 0;
	cout << "Choisissez le type d'affichage, 'A' pour Anglaise, 'B' pour francaise";
	if(choix == 'A'){
		temps.afficherHeureEn();
	}
	else if(choix == 'B') {
		temps.afficherHeureFr();
	}
	

	//inferieur ou supérieur
	Temps tp(13, 25, 30);

	if (temps.inferieur(tp) == 1) {
		cout << "Inférieur";
	}
	else {
		cout << "Supérieur";
	}


}