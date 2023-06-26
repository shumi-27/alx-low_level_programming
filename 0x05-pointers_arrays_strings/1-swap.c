#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a : pointer 1.
 * @b : pointer 2.
 * Retur: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
