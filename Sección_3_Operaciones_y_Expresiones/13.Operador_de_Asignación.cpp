// Operador de Asignación

#include <stdio.h>

int main(){
	
	int a,b,c;
//	a=b=c=20; // Asignamos el mismo valor a diferentes variables
	a = 10;
	a += 5;
	printf("Hasta el momento a vale %i\n", a);
	a -= 10;
	printf("Hasta el momento a vale %i\n", a);
	a *= 5;
	printf("Hasta el momento a vale %i\n", a);
	a /= 5;
	printf("Hasta el momento a vale %i\n", a);
	
//	printf("El valor de la variables son = %i %i %i", a, b, c);
	
	
	return 0;
}
