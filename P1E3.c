/*
 * Realice un programa en C que lea un arreglo de enteros N x M, calcule un arreglo N x M con la suma delos vecinos de cada número en la matriz incluyendo al mismo número y lo imprima.
 * Requerimientos:
 *      * Realice una función que lea una matriz de Nx M.
 *      * Realice una función que reciba la matriz y devuelva otra con la suma de los vecinos.
 *      * Realice una función que imprima una matriz de Nx M.
*/

#include "stdio.h"

#define N 3
#define M 4

void CaptureMatrix ( int input[N][M] );

void AddNeighbours ( int input[N][M], int result[N][M] );

void PrintMatrix ( int input[N][M] );

int main ()
{
	int originalMatrix[N][M];
	int addedMatrix[N][M];

	CaptureMatrix(originalMatrix);
	printf("Matriz original: ");
	PrintMatrix(originalMatrix);
	AddNeighbours(originalMatrix, addedMatrix);
	printf("Matrix resultante: ");
	PrintMatrix(addedMatrix);
}

void CaptureMatrix ( int input[N][M] )
{
	printf("Ingrese la matriz\n");
	for ( int i = 0; i < N; i++ )
		for ( int j = 0; j < M; j++ )
		{
			printf("[%d, %d]: ", i, j);
			scanf("%d", &input[i][j]);
		}
}

void AddNeighbours ( int input[N][M], int result[N][M] )
{
	for ( int i = 0; i < N; i++ )
		for ( int j = 0; j < M; j++ )
		{
			result[i][j] = input[i][j];

			if ( i < (N - 1))
				result[i][j] += input[i + 1][j];
			if ( i > 0 )
				result[i][j] += input[i - 1][j];
			if ( j < (M - 1))
				result[i][j] += input[i][j + 1];
			if ( j > 0 )
				result[i][j] += input[i][j - 1];
		}
}

void PrintMatrix ( int input[N][M] )
{
	printf("\n");
	for ( int i = 0; i < N; i++ )
	{
		printf("|\t");
		for ( int j = 0; j < M; j++ )
			printf("%d\t", input[i][j]);
		printf("|\n");
	}
}

