/*
 *  Realice un programa en C que solicite una cadena de caracteres al usuario (puede tener espacios) y un caracter y que imprima el número de veces que ese caracter aparece en la cadena.
 *
 *  Ejemplo:
 *      Cadena:  "El éxito es la suma de pequeños esfuerzos repetidos día tras día"Caracter: 'a'
 *      Resultado:  El caracter a aparece 5 veces en la cadena
 *
 *  Requerimientos:
 *      El máximo tamaño de la cadena será de 100 caracteres
 *      Realice una función que pida la cadena al usuario
 *      Realice una función que pida el caracter al usuario
 *      Realice una función que reciba la cadena y el caracter y regrese el número de veces que el caracter aparece en la cadena
 *
 *  Imprima el resultado en el main
*/

#include "stdio.h"
#include "string.h"

#define STRING_LENGTH 100

void CaptureString(char string[]);

char CaptureChar();

int CountChar(char string[], char repChar);

void PrintRepetitions(char string[], char selChar, int rep);

int main()
{
	char string[STRING_LENGTH];
	char character = 'a';

	CaptureString(string);

	character = CaptureChar();
	PrintRepetitions(string, character, CountChar(string, character));
}

void CaptureString(char string[])
{
	printf("Captura la cadena a evaluar:");
	scanf("%[^\n]", string);
//	getchar();
}

char CaptureChar()
{
	char c;
	printf("Captura el caracter a contar:");
	scanf(" %c", &c);
	return c;
}

int CountChar(char *string, char selChar)
{
	int charRep = 0;

	for (int i = 0; i < strlen(string); i++)
		if (string[i] == selChar)
			charRep++;

	return charRep;
}

void PrintRepetitions(char *string, char selChar, int rep)
{
	printf("El caracter '%c' aparece %d veces en la cadena \"%s\"", selChar, rep, string);
}

