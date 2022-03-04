/*
 * Realice un programa en C que lea una cadena y quecambie todas las vocales mayúsculas a minúsculas y viceversa
 *      a.Lea en el main lacadena de caracteres (puede contener espacios).
 *      b.Realice una función que reciba la cadena y realice la conversión.
 *      c.Imprima la cadena final en el main.
 *
 *      Ejemplo:
 *          Este es un examen → estE Es Un ExAmEn
*/

#include "stdio.h"
#include "string.h"

#define SIZE 100

void ChangeVowels(char sentence[]);

int main ()
{
	char input[SIZE];

	printf("Ingrese la cadena: ");
	scanf("%[^\n]", input);
	ChangeVowels(input);
	printf("Cadena resultante: ");
	printf("%s", input);
}

void ChangeVowels(char sentence[])
{
	for ( int i = 0; i < strlen(sentence); i++ )
		switch ( sentence[i] )
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				sentence[i]-=32;
				break;
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				sentence[i]+=32;
				break;
		}
}
