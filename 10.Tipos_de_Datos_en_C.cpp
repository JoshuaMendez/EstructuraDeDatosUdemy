/* Tipos de Datos en C */

#include <stdio.h>
#include <stdbool.h> // <-- Sin esta librería no se puede usarl el tipo de dato bool

int main(){
	
	int a = 1.9; // Solo va a imprimir el 1, es un entero. // 2 bytes (-32768->32767)
	char b = 'z'; // 1 byte (0->255) Código ASCII
	float c = 1.5; // 4 bytes
	double d = 1555555555555.55555; //8 bytes
	short v = 2; // Almacena el mismo dato que un int solo que almacena menos cantidad. // 2 bytes (-128->127)
	long e = 12.3; // 4 bytes
	long double r = 12.33323232323;
	unsigned int f = 123; // Solo positivo // 2 bytes (0->65535)
	
	printf("el valor del entero es de %d\n", a);
	printf("el valor del char es de %c\n", b);
	printf("el valor del float es de %f\n", c);
	printf("el valor del double es de %lf\n", d);
	printf("el valor del short es de %i\n", v);
	printf("el valor del long es de %li\n", e);
	printf("el valor del unsigned int es de %i\n", f);
}
