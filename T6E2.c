/*
 * Modifique el programa anterior para que pida al usuario números a validar hasta que el número que capture sea 0.
*/

#include "stdio.h"

int perfectNumber(int num);

int main()
{
	int userNum;
	do
	{
	printf("Ingrese el numero a verificar (Ingrese 0 para salir):");
	scanf("%d", &userNum);

	if (!userNum) break;

	printf("El numero %d%s es perfecto\n", userNum, perfectNumber(userNum) ? "":" no");
	} while (userNum != 0);
}

int perfectNumber(int num)
{
	int sum = 0;

	for (int i = 1; i < num; i++)
		if ((num % i) == 0)
			sum += i;

	return sum == num;
}
