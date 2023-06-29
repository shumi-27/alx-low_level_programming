#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers.
 * @n : number.
 * @a : pointer to array.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, temp, *arr =  a;

	for (i = 1; i <= n; i++)
	{
		arr++;
	}
	arr--;
	while (a < arr)
	{
		temp = *a;
		*a = *arr;
		*arr = temp;
		arr--;
		a++;
	}
}
