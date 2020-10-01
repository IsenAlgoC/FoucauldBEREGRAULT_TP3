#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define NBMAXNOTE 30

int main() {
	printf("Entrer vos notes de 0 a 20 : \n");
	int compteur = 0, nbAbsent =0, nbNoteValide = 0, verif = 0;
	char reponse;
	float note, moyenne = 0, tableauNote[30];
	// Initialisation tableau a moins 2
	for (int j = 0; j < NBMAXNOTE; j++) {
		tableauNote[j] = -2;
	};

	do {
		// INPUT NOTE
		printf("\nNote numero %d : ", compteur);
		scanf_s("%5f",&note);
		// CAS ou la note n'est pas comprise entre 0 et 20
		if ((note > 20) || (note < 0)) {
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes? (A/O/N)");
			reponse = _getch();
			switch (reponse)
			{
			case 'A':
				nbAbsent++;
				tableauNote[compteur] = -1;
				break;
			case 'O':
				// Verif permet ensuite de compter le nombre de notre entree par la suite
				//verif = compteur;
				compteur = NBMAXNOTE;
				
				break;
			case'N':
				compteur--;
				break;
			default:
				compteur = NBMAXNOTE;
				break;
				
			}

		}
		//Entrer la note dans le tableau
		else { tableauNote[compteur] = note; };
		compteur++;
	} while (compteur < NBMAXNOTE);
	// Compte le nombre de valide
	/**if (verif != 0) {
		nbNoteValide = verif - nbAbsent;
	} else {
		nbNoteValide = NBMAXNOTE - nbAbsent;
	};**/
	// Clacul de la moyenne
	for (int j = 0; j < NBMAXNOTE; j++) {
		if (tableauNote[j] == -2) {
			break;
		}
		if (tableauNote[j] != -1) {
			moyenne += tableauNote[j];
		}; 
		nbNoteValide++;
	};
	nbNoteValide -= nbAbsent;
	moyenne = moyenne / nbNoteValide;
	printf("\nIl y a %d notes. La note moyenne est de %f. Il y a %d absent(s)\n",nbNoteValide, moyenne, nbAbsent);
}
