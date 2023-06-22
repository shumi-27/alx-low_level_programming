#include "main.h"
/**
 * more_numbers - Prints 0-14 followed by new line.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, b, c[] = {1, 0, 1, 1, 1, 2, 1, 3, 1, 4};

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar(b + '0');
		}
		for (b = 0; b < 10; b++)
		{
			_putchar(c[b] + '0');
		}
		_putchar('\n');
	}

}
