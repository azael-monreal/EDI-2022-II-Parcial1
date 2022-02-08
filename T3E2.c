/*
 * Escribe un programa que pida al usuario días, horas y minutos.
 * Calcule la cantidad total de segundos y los imprima como en el ejemplo:
 * Si el usuario captura:
 *
 * Días:  1
 * Horas: 4
 * Minutos:  35
 *
 * El programa deberá imprimir:
 *
 * 1 día, 4 horas y 35 minutos son:  102900 segundos.
 */
#include "stdio.h"

int main()
{
    int d, h, m, s;

    printf("*** Ingresa cantidad de dias, horas y segundos ***\n");
    printf("Dias:");
    scanf("%d", &d);

    printf("Horas:");
    scanf("%d", &h);

    printf("Minutos:");
    scanf("%d", &m);

    s = m * 60 + h * 3600 + d * 86400;

    printf("%d dias, %d horas y %d minutos son: %d segundos", d, h, m, s);
}

