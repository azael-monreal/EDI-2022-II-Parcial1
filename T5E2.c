/*
 * Una frutería ofrece las manzanas con descuento según la siguiente tabla:
 *
 * Numero de kilos comprados    % Descuento
 *
 *     0 - 2                        0%
 *  2.01 - 5                       10%
 *  5.01 - 10                      15%
 *  10.01 en adelante              20%
 *
 * Dado el precio por kilo, y el peso, determinar cuánto pagará una persona que compre manzanas es esa frutería.
*/

#include "stdio.h"

int main()
{
	float kg, precioKg, precioT;

	printf("Cantidad de kilos:");
	scanf("%f", &kg);
	printf("Precio por kilo:");
	scanf("%f", &precioKg);

	precioT = kg * precioKg;

	if (kg <= 2.0)
		precioT *= 1.0;
	else if (kg <= 5.0)
		precioT *= 1.0 - (10.0 / 100.0);
	else if (kg <= 10.0)
		precioT *= 1.0 - (15.0 / 100.0);
	else
		precioT *= 1.0 - (20.0 / 100.0);

	printf("Debera pagar $%.2f", precioT);
}
