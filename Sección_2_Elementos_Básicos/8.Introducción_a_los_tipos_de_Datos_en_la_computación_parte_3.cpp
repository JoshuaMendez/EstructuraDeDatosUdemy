/* Tipos de Datos

|-+-> Se ocupa la memoria RAM <-+-|

Primitivos o Básicos:
	- Entero (int) [Números (No importa si son negativos o positivos)]
		Usan 4 bytes y van desde -2147483648 hasta 2147483647. int a
	
	- Punto Flotante (float [Precisión Simple (Son un poco más pequeños) Ej: 2.30] / double [Precisión Doble (Son un poco más grandes)] Ej: 234343.3043 - Ocupa más memoria)
		Float:
			Ocupa 4 bytes. Va desde 1.2E-38 hasta 3.4E+38. 6 dígitos de precisión. float a
		Double:
			Ocupa 8 bytes. Va desde 2.3E-308 hasta 1.7E+308. 15 dígitos de precisión. double a
			
	- Caracter (char) [Datos String en Python. Ej: '1', 'c'] Comillas dobles para conjuntos de varios caracteres. Ej: "Joshua" = 'J', 'o', 's', 'h', 'u', 'a'.
		Ocupa 1 byte = 8 bits. Va desde -128 hasta 127 o 0 hasta 255. El caracter se almacena en ascii. char a
		
	- Booleano (bool) [Falso o Verdadero]
		Ocupa 2 bytes. bool a
	

Compuestos:
Son aquellos que están formados por la combinación de varios tipos de datos primitivos.

	- Arreglos (Son una colección de elementos de un mismo tipo, permiten almacenar varios valores de un mismo tipo en una única variable) Ej: Arreglos de caracteres, Arreglos de enteros. -> Solo pueden almacenar un tipo de dato <- Ej: int edades [14, 15, 16, 17]
		Ocupa el valor de lo que se va a guardar multiplicado por 10.
		Por ejemplo:
			Queremos guardar un arreglo de enteros
				Los enteros ocupan 4 bytes, y si lo multiplicamos por 10 nos da 40 bytes.
					Por ende el espacio que ocuparía el arreglo sería de 40 bytes.
				Se declararía como int b[10];
			
			Queremos guardar un arreglo de double
				Los double ocupan 8 bytes, y si lo multiplicamos por 10 nos da 80 bytes.
					Por ende el espacio que ocuparía el arreglo sería de 80 bytes.
				Se declararía como double b[10];
		
	- Apuntadores (Almacenan direcciones de memoria)
		Se declaran utilizando el tipo de dato al que apuntan.
		
			Hay apuntadores a TODOS los tipos de datos primitivos.
		
				Ej: int *a <-- Declara un apuntador "a" entero.
				
		4 bytes. Ocupan la cantidad de memoria de una Variable. Siempre ocupan la misma cantidad de memoria sin importar el tipo de dato al que apunten.
		Guarda la dirección a memoria, no el dato a que apunta.
		
	- Estructuras (Permiten almacenar juntos bajo un mismo nombre datos de diferentes tipos). Ej: Variable: Persona, int: edad, bool: vivo o muerto, caracter: nombre.
		Se declara como:
		
			Ej: struct persona{
				char nombre[50] <- Estamos diciento que hay un arreglo llamado "nombre" que tiene 50 caracteres
				int edad;
				}
				
		Calculemos cuánta memoria vale el ejemplo anterior:
		
			Ej: struct persona{
				char nombre[50] <- El caracter vale 1 byte, lo multiplicamos por la cantidad de caracteres que hayan (en este caso 50) por lo tanto, esta sección vale 50 bytes.
				int edad; <- Valen 4 bytes.
				}
			
			Concluímos que esta estructura en total vale 54 bytes.
			
			
		**En C no existen los strings, solo arreglos de caracteres.


Variables y Constantes:

Las Variables son espacios de memoria reservados para almacenar datos que pueden ser modificados durante la ejecución del programa.

Las Constantes son espacios de memoria reservados para almacenar datos que no pueden ser modificados durante la ejecución del programa.

Variables cambian, Constantes no cambian.


Void:

Significa Vacío

	¿Para qué sirve?
		Representa la ausencia de un tipo. Se usa en funciones para indicar que no devuelve ningún valor o que no recibe ningún argumento.
		
	No se puede declarar una variable de tipo Void.

*/

