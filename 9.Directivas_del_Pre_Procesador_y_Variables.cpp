/* Directivas de Prepocesador y Variables

Son las librerías

	#include <stdio.h> <- Librería Básica
	#include <string.h>
	#include <math.h>
	#include <stdlib.h>
	
Macros:

Te deja definir cosas para usarlas cuando quieras en el programa.

	#define PI 3.1416;
*/

#include <stdio.h> // Librería
#define PI 3.1416 // Macro [Las macros nunca llevan ";" al final

int y = 5; // Variable global no está dentro de la función main().

int main(){
	
	int x = 10; // Variable local. Solo se puede usar dentro de main().
	
	float Suma = 0;
	
	Suma = PI + x;
	
	printf("la Suma es: %.2f", Suma); // %i significa que agarramos el valor ENTERO de la variable Suma.
									 // %f significa que agarramos el valor FLOTANTE de la variable Suma.
									 // el .2 que está después del % y antes de la f, significa que limitamos los decimales y le decimos que solo nos devuelva el número con 2 decimales.
	
	return 0; // Devuelve el valor de la función a 0
}
