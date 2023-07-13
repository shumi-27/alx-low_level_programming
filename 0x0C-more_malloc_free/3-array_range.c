#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers.
 * @min : min value
 * @max : max value
 * Return: Pointer to array.
 */
int *array_range(int min, int max)
{
	int *arr, *arr_ret, size;

	if (min > max)
	{
		return (0);
	}
	size = (max - min) + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (0);
	}
	arr_ret = arr;
	while (size)
	{
		*arr = min;
		min++;
		arr++;
		size--;
	}
	return (arr_ret);
}
