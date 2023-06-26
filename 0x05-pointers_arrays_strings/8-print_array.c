#include <stdio.h>
#include "main.h"
/**
 * print_array - prints numbesrs in an array.
 * @a : array.
 * @n : number of elements.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
