/*
 * Realice un programa en C que solicite MAX enteros entre 1 y 100, los almacene en un arreglo y realice las siguientes funciones:
 *      a. Función que regrese la suma de los valores de las posiciones pares del arreglo.
 *      b. Función que regrese la suma de los valores pares del arreglo.
 *      c. Función que sume los valores en el arreglo mientras la suma no sobrepase 100.  La función debe regresar la suma y la cantidad de números que sumó.
 *      d. El main deberá imprimir el resultado de cada función.
*/

#include "stdio.h"

#define MAX 5

void CaptureArray(int array[], int size);

int Sum(int array[], int size);

int EvenSum(int array[], int size);

int SumTo100(int array[], int size, int *quantity);

int main()
{
	int nums[MAX];

	CaptureArray(nums, MAX);

	printf("Suma de todos los valores: %d\n", Sum(nums, MAX));
	printf("Suma de los valores pares: %d\n", EvenSum(nums, MAX));
	int sumedNums = 0;
	printf("Suma menor que 100: %d, ", SumTo100(nums, MAX, &sumedNums));
	printf("Cantidad de numeros sumados: %d\n", sumedNums);
}

void CaptureArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Ingrese el valor %d del arreglo(entre 1 y 100): ", i+1);
		int temp;
		do
		{
			scanf("%d", &temp);
		} while (temp < 1 || temp > 100);

		array[i] = temp;
	}
}

int Sum(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += array[i];

	return sum;
}

int EvenSum(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		if (!(array[i] % 2))
			sum += array[i];

	return sum;
}

int SumTo100(int array[], int size, int *quantity)
{
	int sum = 0, qnt = 0;

	for (*quantity = 0; sum + array[*quantity] <= 100; (*quantity)++)
		sum += array[*quantity];

	return sum;
}