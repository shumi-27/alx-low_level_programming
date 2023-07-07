#include "main.h"
/**
 * sqrt_helper - determine the sqrt.
 * @n : number to determine sqrt of.
 * @start : start search.
 * @end : end search.
 * Return: the results of search
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}

	if (mid * mid < n)
	{
		return (sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1));
	}
}
/**
 * _sqrt_recursion - finds the sqrt of a number.
 * @n : number.
 * Return: Square root.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 1, n));
}
