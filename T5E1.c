/*
 *  Escriba un programa en C que solicite al usuario una hora (hora y minutos) y lo salude siguiendo estas condiciones:
 *
 *  a. Si la hora está entre las 0:00 y las 11:59 saludará con Buenos Días
 *  b. Entre las 12:00 y las 17:50 saludará con Buenas Tardes
 *  c. Entre las 18:00 y las 23:59 saludará con Buenas Noches
 *  d. Cualquier otra opción dirá que la hora no es válida
 */

#include "stdio.h"

int main()
{
	int h, m;

	printf("Ingrese hora: ");
	scanf("%d", &h);
	printf("Ingrese minutos: ");
	scanf("%d", &m);

	if (h < 24 && m < 60)
	{
		if (h < 12)
			printf("Buenos dias");
		else if (h < 18)
			printf("Buenos tardes");
		else if (h < 24)
			printf("Buenos noches");
	} else
		printf("Hora no valida");
}

