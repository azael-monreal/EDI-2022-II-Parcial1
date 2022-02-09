/*
 * Escriba un programa que pida el precio de un producto (puede tener decimales) y el porcentaje de descuento.
 * Calcule el precio del producto con el descuento y lo imprima con 2 decimales.
 * Por ejemplo:  Si el usuario captura el precio de 99.99 y el 25 por ciento de descuento,
 * el programa debe de decir que el precio con descuento es:  74.99.
 */

#include "stdio.h"

int main()
{
    float precio;
    int descuento;

    printf("Precio del producto: $");
    scanf("%f", &precio);
    printf("Descuento en porcentaje: %%");
    scanf("%d", &descuento);

    float precio_d = precio * (1.0 - (descuento / 100.0));

    printf("El precio del producto con descuento es de : $%.2f", precio_d);
}