/* Tipos de Datos

|-+-> Se ocupa la memoria RAM <-+-|

Primitivos o B�sicos:
	- Entero (int) [N�meros (No importa si son negativos o positivos)]
		Usan 4 bytes y van desde -2147483648 hasta 2147483647. int a
	
	- Punto Flotante (float [Precisi�n Simple (Son un poco m�s peque�os) Ej: 2.30] / double [Precisi�n Doble (Son un poco m�s grandes)] Ej: 234343.3043 - Ocupa m�s memoria)
		Float:
			Ocupa 4 bytes. Va desde 1.2E-38 hasta 3.4E+38. 6 d�gitos de precisi�n. float a
		Double:
			Ocupa 8 bytes. Va desde 2.3E-308 hasta 1.7E+308. 15 d�gitos de precisi�n. double a
			
	- Caracter (char) [Datos String en Python. Ej: '1', 'c'] Comillas dobles para conjuntos de varios caracteres. Ej: "Joshua" = 'J', 'o', 's', 'h', 'u', 'a'.
		Ocupa 1 byte = 8 bits. Va desde -128 hasta 127 o 0 hasta 255. El caracter se almacena en ascii. char a
		
	- Booleano (bool) [Falso o Verdadero]
		Ocupa 2 bytes. bool a
	

Compuestos:
Son aquellos que est�n formados por la combinaci�n de varios tipos de datos primitivos.

	- Arreglos (Son una colecci�n de elementos de un mismo tipo, permiten almacenar varios valores de un mismo tipo en una �nica variable) Ej: Arreglos de caracteres, Arreglos de enteros. -> Solo pueden almacenar un tipo de dato <- Ej: int edades [14, 15, 16, 17]
		Ocupa el valor de lo que se va a guardar multiplicado por 10.
		Por ejemplo:
			Queremos guardar un arreglo de enteros
				Los enteros ocupan 4 bytes, y si lo multiplicamos por 10 nos da 40 bytes.
					Por ende el espacio que ocupar�a el arreglo ser�a de 40 bytes.
				Se declarar�a como int b[10];
			
			Queremos guardar un arreglo de double
				Los double ocupan 8 bytes, y si lo multiplicamos por 10 nos da 80 bytes.
					Por ende el espacio que ocupar�a el arreglo ser�a de 80 bytes.
				Se declarar�a como double b[10];
		
	- Apuntadores (Almacenan direcciones de memoria)
		Se declaran utilizando el tipo de dato al que apuntan.
		
			Hay apuntadores a TODOS los tipos de datos primitivos.
		
				Ej: int *a <-- Declara un apuntador "a" entero.
				
		4 bytes. Ocupan la cantidad de memoria de una Variable. Siempre ocupan la misma cantidad de memoria sin importar el tipo de dato al que apunten.
		Guarda la direcci�n a memoria, no el dato a que apunta.
		
	- Estructuras (Permiten almacenar juntos bajo un mismo nombre datos de diferentes tipos). Ej: Variable: Persona, int: edad, bool: vivo o muerto, caracter: nombre.
		Se declara como:
		
			Ej: struct persona{
				char nombre[50] <- Estamos diciento que hay un arreglo llamado "nombre" que tiene 50 caracteres
				int edad;
				}
				
		Calculemos cu�nta memoria vale el ejemplo anterior:
		
			Ej: struct persona{
				char nombre[50] <- El caracter vale 1 byte, lo multiplicamos por la cantidad de caracteres que hayan (en este caso 50) por lo tanto, esta secci�n vale 50 bytes.
				int edad; <- Valen 4 bytes.
				}
			
			Conclu�mos que esta estructura en total vale 54 bytes.
			
			
		**En C no existen los strings, solo arreglos de caracteres.


Variables y Constantes:

Las Variables son espacios de memoria reservados para almacenar datos que pueden ser modificados durante la ejecuci�n del programa.

Las Constantes son espacios de memoria reservados para almacenar datos que no pueden ser modificados durante la ejecuci�n del programa.

Variables cambian, Constantes no cambian.


Void:

Significa Vac�o

	�Para qu� sirve?
		Representa la ausencia de un tipo. Se usa en funciones para indicar que no devuelve ning�n valor o que no recibe ning�n argumento.
		
	No se puede declarar una variable de tipo Void.

*/

