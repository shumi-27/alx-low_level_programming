#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of array.
 * @array : array.
 * @size : size.
 * @action : function.
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < ((int)size); i++)
	{
		action(array[i]);
	}
}
