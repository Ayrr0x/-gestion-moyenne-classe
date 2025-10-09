
#include <iostream>

int main(){
	int nb_eleves;
	float moyenne = 0;
	int Meilleur_Moy = 0;
	std::cout << "Nombre Eleve:" << "\n";
	std::cin >> nb_eleves;
	int* notes = new int[nb_eleves];
	for (int X = 0; X < nb_eleves; X++) {
		std::cin >> notes[X];
		moyenne += notes[X];
		if (notes[X] > Meilleur_Moy) {
			Meilleur_Moy = notes[X];
			
		}
	}
	delete[] notes;
		notes = nullptr;
		std::cout << "Moyenne de classe" << "\n";
		std::cout << moyenne / nb_eleves << "\n";
		std::cout << "Meilleur Moyenne" << "\n";
	std::cout << Meilleur_Moy << "\n";
}

