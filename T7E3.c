/*
 * Realice un programa en C que capture la clave, precio y el stock de los productos de una tienda.
 * El programa deberá imprimir la clave del producto con mayor precio, la clave del producto con menos stock,
 * el total de venta en caso de que se vendan todos los productos de la tienda.
 *
 * Ejemplo:
 *
 * Suponga que hay 4 productos en la tienda
 *
 * Clave        Precio          Stock
 * 43           10.50           4
 * 33           9.99            1
 * 12           7.30            6
 * 99           12.90           3
 *
 * El programa imprimirá:
 *      Producto con mayor precio: 99
 *      Producto con menos stock:  33
 *      Total de venta esperada:  134.49
*/

#include "stdio.h"

#define PROD_NUM 4

void CaptureProducts(int key[], float price[], int stock[], int size);

int HighPrice(int price[], int size);

int LessStock(int stock[], int size);

float TotalEarnings(float price[], int stock[], int size);

int main()
{
	int prodKey[PROD_NUM];
	float prodPrice[PROD_NUM];
	int prodStock[PROD_NUM];

	CaptureProducts(prodKey, prodPrice, prodStock, PROD_NUM);

	printf("Producto con mayor precio: %d\n", prodKey[HighPrice(prodPrice, PROD_NUM)]);
	printf("Producto con menos stock: %d\n", prodKey[LessStock(prodStock, PROD_NUM)]);
	printf("Total de venta esperada: %.2f\n", TotalEarnings(prodPrice, prodStock, PROD_NUM));
}

void CaptureProducts(int key[], float price[], int stock[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("****    Producto %d     ****\n", i + 1);

		printf("Clave: ");
		scanf("%d", &key[i]);
		printf("Precio: ");
		scanf("%f", &price[i]);
		printf("Stock: ");
		scanf("%d", &stock[i]);
	}
}

int HighPrice(int price[], int size)
{
	int high = 0;

	for (int i = 0; i < size; i++)
		if (price[i] > price[high])
			high = i;

	return high;
}

int LessStock(int stock[], int size)
{
	int low = 0;

	for (int i = 0; i < size; i++)
		if (stock[i] < stock[low])
			low = i;

	return low;
}

float TotalEarnings(float price[], int stock[], int size)
{
	float sum;

	for (int i = 0; i < size; i++)
		sum += price[i] * stock[i];

	return sum;
}