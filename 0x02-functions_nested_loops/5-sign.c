#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * @n : Accepts number.
 * Return: 0 if number is 0, 1 if positive and -1 if negative.
 */
int print_sign(int n)
{
int retval;

	if (n < 0 && n != 0)
	{
		retval = -1;
		_putchar('-');
	}
	else if (n > 0 && n != 0)
	{
		retval = 1;
		_putchar('+');
	}
	else
	{
		retval = 0;
		_putchar('0');
	}

return (retval);
}
