// Entradas y Salidas en C

#include <stdio.h>

int main(){
	
	int q;
	float w;
	char e[40];
	
/*	printf("Escribe el valor de la variable a (int)\n");
	scanf("%i", &q); // Se le dice que el va a guardar el valor en la variable q
	
	printf("Digita el valor de la variable flotante \n");
	scanf("%f", &w);*/
	
	printf("Escribe tu nombre \n");
	gets(e);
	//scanf("%s", &e); // scan te guarda hasta que halla un espacio. Se puee usar gets(nombreDeLaVariable) para agarrar todo el string
	
/*	printf("El valor que escribiste es %i\n", q);
	printf("El valor que escribiste es %f\n", w);*/
	printf("Bienvenido %s", e);
	
	return 0;
}
