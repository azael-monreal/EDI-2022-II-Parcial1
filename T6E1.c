/*
 * Realice un programa en C que imprima si un número dado por el usuario es un número perfecto.
 * Un número perfecto es un entero positivo que es igual a la suma de sus divisores, excluyendolo a si mismo.
 *
 * Ejemplo:
 *      Suponga que el número dado por el usuario es 6.  Los divisores exactos de 6 son: 3, 2, 1.
 *      Como 3 + 2 + 1 = 6 entonces 6 es un número perfecto
 *
 * Requerimientos:
 * a.	Solicite al usuario el número a validar en el main
 * b.	Realice una función que reciba en número, lo valide y regrese un 1 si es perfecto o un 0 en caso contrario.
 * c.	Imprima en el main "El número __ es perfecto" si es perfecto, "El número __ no es perfecto"
*/

#include "stdio.h"

int perfectNumber(int num);

int main()
{
	int userNum;
	printf("Ingrese el numero a verificar:");
	scanf("%d", &userNum);

	printf("El numero %d%s es perfecto", userNum, perfectNumber(userNum) ? "":" no");
}

int perfectNumber(int num)
{
	int sum = 0;

	for (int i = 1; i < num; i++)
		if ((num % i) == 0)
			sum += i;

	return sum == num;
}
