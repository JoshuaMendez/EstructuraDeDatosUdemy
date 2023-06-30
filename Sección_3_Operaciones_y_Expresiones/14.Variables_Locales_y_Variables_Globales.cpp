/* Variables Locales y Variables Globales */

#include <stdio.h>

int variable = 0;

int main(){
	
// Variables Locales
	for (int i = 0; i < 16; i++){
		printf("\nValor de i: %i", i);
		i += 3; // La variable i solo se declaró en el bucle for. Variable Local
	}
	
// Variables Globales
	variable +=5
	printf("\nValor de variable:")

}
