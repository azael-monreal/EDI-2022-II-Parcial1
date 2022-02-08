/*
 * Escribe un programa que pida al usuario la cantidad de segundos
 * e imprima el número de días, horas, minutos y segundos que son:
 *
 * Por ejemplo:
 *
 * Segundos:  765925
 *
 * El programa deberá imprimir:
 *
 * Días: 8
 * Horas: 20
 * Minutos: 45
 * Segundos: 25
 */

#include "stdio.h"

int main()
{
    int s, m, h, d;

    printf("*** Ingresar cantidad de segundos ***\n");
    printf("Segundos:");
    scanf("%d", &s);

    d = s / 86400;
    h = (s / 3600) % 24;
    m = (s / 60) % 60;
    s = s % 60;

    printf("Dias: %d\nHoras: %d\nMinutos: %d\nSegundos: %d", d, h, m, s);
}

