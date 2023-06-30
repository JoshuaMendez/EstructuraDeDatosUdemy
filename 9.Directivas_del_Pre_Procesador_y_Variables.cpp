/* Directivas de Prepocesador y Variables

Son las librer�as

	#include <stdio.h> <- Librer�a B�sica
	#include <string.h>
	#include <math.h>
	#include <stdlib.h>
	
Macros:

Te deja definir cosas para usarlas cuando quieras en el programa.

	#define PI 3.1416;
*/

#include <stdio.h> // Librer�a
#define PI 3.1416 // Macro [Las macros nunca llevan ";" al final

int y = 5; // Variable global no est� dentro de la funci�n main().

int main(){
	
	int x = 10; // Variable local. Solo se puede usar dentro de main().
	
	float Suma = 0;
	
	Suma = PI + x;
	
	printf("la Suma es: %.2f", Suma); // %i significa que agarramos el valor ENTERO de la variable Suma.
									 // %f significa que agarramos el valor FLOTANTE de la variable Suma.
									 // el .2 que est� despu�s del % y antes de la f, significa que limitamos los decimales y le decimos que solo nos devuelva el n�mero con 2 decimales.
	
	return 0; // Devuelve el valor de la funci�n a 0
}
