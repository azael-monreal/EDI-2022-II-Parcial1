/*
 * Realice un programa en C que pida N números al usuario e imprima el mayor y el menor de los números capturados (No use arreglos).
 *
 * Ejemplo:
 *      Suponiendo N = 10
 *      Datos del usuario: 15 7 9 34 8 3 22 4 27 6
 *      El resultado será:  menor = 3, mayor = 34
 *
 * Requerimientos:
 * a.	N deberá ser una constante.  Ejecute su programa con N = 10, 15 y 20.
 * b.	Realice una función que pida los números y regrese al main los valores mayor y menor.
 * c.	Imprima en el main los valores mayor y menor.
*/

#include "stdio.h"

void sgNumbers(int n, int* small, int* great);

int main()
{
	const int N = 20;
	int small, great;

	sgNumbers(N, &small, &great);
	printf("menor: %d mayor: %d", small, great);

}

void sgNumbers(int n, int *small, int *great)
{
	printf("Ingrese los numeros a evaluar: ");
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);

		if (!i)
		{
			*great = num;
			*small = num;
			continue;
		}

		if (num < *small)
			*small = num;
		else if (num > *great)
			*great = num;
	}
}
