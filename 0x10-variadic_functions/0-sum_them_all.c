#include "variadic_functions.h"
/**
 * sum_them_all - Sums numbers.
 * @n : number of arguments.
 * Return: Sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list slist;

	if (n == 0)
	{
		return (0);
	}
	va_start(slist, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(slist, int) + sum;
	}
	va_end(slist);
	return (sum);
}
