#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n : Length of the line
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n != 0 && n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
				{
					_putchar(' ');
				}
				else
				{
				_putchar(92);
				_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}

}
