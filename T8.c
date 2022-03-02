/*
 * Lea dos matrices de enteros N x M (arreglos bidimensionales)
 *
 *      a. Realice una funcion para capturar un arreglo bidimensional
 *      b. Realice una funcion que sume las dos matrices y regrese una tevera matriz con el resltado de la suma
 *
 *      Suponiendo que N = 3 y M = 4
 *
 *      Matriz A
 *      1    2   3
 *      4    5   6
 *      7    8   9
 *      10   11  12
 *
 *      Matriz B
 *      1    2   3
 *      4    5   6
 *      7    8   9
 *      10   11  12
 *
 *      El resultado sera:
 *      2    4   6
 *      8    10  12
 *      14   16  18
 *      20   22  24
 *
 *      c. Realice una funcion que obtenga el promedio de los renglones de una matriz y los guarde en un arreglo (verifique el tipo de dato del arreglo)
 *
 *      2   4   6
 *      8   10  12
 *      14  16  18
 *      20  22  24
 *
 *      El resultado sera:
 *      4   10  16  22
 *
 *      d. Realice una funcion que obtenga el promedio de las columnas d eun amatriz y los guarde en otro arreglo
 *
 *      2   4   6
 *      8   10  12
 *      14  16  18
 *      20  22  24
 *
 *      El resultado sera:
 *      11  13  15
*/

#include "stdio.h"

#define N 4
#define M 3

void CaptureMatrix(int matrix[N][M], int rows, int cols);

void PrintMatrix(int matrix[N][M], int rows, int cols);

void AddMatrix(int aMatrix[N][M], int bMatrix[N][M], int result[N][M], int rows, int cols);

int RowAvrg(int matrix[N][M], int result[N], int rows, int cols);

int ColumnAvrg(int matrix[N][M], int result[M], int rows, int cols);

void PrintArray(int array[], int size);

int main()
{
	int matrixA[N][M];
	int matrixB[N][M];

	printf("***\tMatriz A\t***\n");
	CaptureMatrix(matrixA, N, M);
	PrintMatrix(matrixA, N, M);

	printf("***\tMatriz B\t***\n");
	CaptureMatrix(matrixB, N, M);
	PrintMatrix(matrixB, N, M);

	int matrixAdded[N][M];

	AddMatrix(matrixA, matrixB, matrixAdded, N, M);
	printf("***\tMatrices Sumadas\t***");
	PrintMatrix(matrixAdded, N, M);

	int rowAvrg[N];
	RowAvrg(matrixAdded, rowAvrg, N, M);
	printf("***\tPromedio por Renglon\t***");
	PrintArray(rowAvrg, N);

	int colAvrg[M];
	ColumnAvrg(matrixAdded, colAvrg, N, M);
	printf("***\tPromedio por Columna\t***");
	PrintArray(colAvrg, M);
}

void CaptureMatrix(int matrix[N][M], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("[%d, %d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
}

void PrintMatrix(int matrix[N][M], int rows, int cols)
{
	printf("\n");
	for (int i = 0; i < rows; i++)
	{
		printf("|\t");
		for (int j = 0; j < cols; j++)
			printf("%d\t", matrix[i][j]);
		printf("|\n");
	}
	printf("\n");
}

void AddMatrix(int aMatrix[N][M], int bMatrix[N][M], int result[N][M], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			result[i][j] = aMatrix[i][j] + bMatrix[i][j];
}

int RowAvrg(int matrix[N][M], int result[N], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		int sum = 0;
		for (int j = 0; j < cols; j++)
			sum += matrix[i][j];
		result[i] = sum / cols;
	}
}

int ColumnAvrg(int matrix[N][M], int result[M], int rows, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		int sum = 0;
		for (int j = 0; j < rows; j++)
			sum += matrix[j][i];
		result[i] = sum / rows;
	}
}

void PrintArray(int array[], int size)
{
	printf("\n|\t");
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("|\t\n");
}