#include "main.h"
/**
 * print_most_numbers - Prints 0-9 excluding 2&4 followed by new line.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}

	_putchar('\n');
}
