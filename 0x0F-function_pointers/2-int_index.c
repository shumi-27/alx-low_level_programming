#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array : array.
 * @size : size of array.
 * @cmp : function pointer.
 * Return: integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j, flag;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		flag = cmp(array[j]);
		if (flag != 0)
		{
			return (j);
		}
	}
	return (-1);
}
