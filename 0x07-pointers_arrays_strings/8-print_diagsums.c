#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a : array
 * @size : matrix size.
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j, tot = 0;

	for (i = 0; i < size; i++)
	{
		tot = tot + a[i][i];
	}
	for (i = 0; i < size; i++)
	{
		for (i = (size - 1); i >= 0; i++)
		{
			tot = tot + a[i][j];
		}
	}
	printf("%d\n", tot);

}
