/*
 * Lea los valores de los lados de un triángulo.
 * Determine y muestre un mensaje correspondiente a su tipo (Equilatero, Isosceles o Escaleno)
*/

#include "stdio.h"

int main()
{
	float l1, l2, l3;

	printf("Medida del lado 1:");
	scanf("%f", &l1);
	printf("Medida del lado 2:");
	scanf("%f", &l2);
	printf("Medida del lado 3:");
	scanf("%f", &l3);

	int eq = (l1 == l2) + (l1 == l3) + (l2 == l3);

	switch (eq)
	{
		case 0:
			printf("El triangulo es escaleno");
			break;
		case 1:
			printf("El triangulo es isosceles");
			break;
		case 2:
		case 3:
			printf("El triangulo es equilatero");
			break;
	}
}