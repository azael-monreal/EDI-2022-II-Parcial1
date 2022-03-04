/*
 * Realice un programa en C, que pida 3 enteros(a, b y c) al usuario, y sean usadas en una función que:
 *
 *      a. Si a es mayor que b, duplique b.
 *      b. Si a es menor que b, le reste a c el valor de a.
 *      c. Si c es menor a 0, lo multiplique por-1.
 *
 * El programa deberá solicitar los valores en el main, llamar a la función e imprimir el resultado final en el main.
*/

#include "stdio.h"

void Operations(int* a, int* b, int* c);

int main ()
{
	int valA, valB, valC;

	printf("a: ");
	scanf("%d", &valA);
	printf("b: ");
	scanf("%d", &valB);
	printf("c: ");
	scanf("%d", &valC);

	Operations(&valA, &valB, &valC);

	printf("a: %d, b: %d, c: %d", valA, valB, valC);
}

void Operations(int* a, int* b, int* c)
{
	int orgA = *a, orgB = *b, orgC = *c;

	if(orgA > orgB)
		*b *=2;
	else if(orgA < orgB)
		*c -= orgA;
	if (orgC < 0)
		*c *= -1;
}