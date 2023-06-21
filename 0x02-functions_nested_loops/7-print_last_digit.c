#include "main.h"
/**
  * print_last_digit - computes the last digit of a number
  * @retval : Accepts number.
  * Return: Last digit of a number.
  */
int print_last_digit(int retval)
{
	if (retval < 0)
	{
		retval = (retval * -1) % 10;
		_putchar(retval + '0');
	}
	else
	{
		retval = retval % 10;
		_putchar(retval + '0');
	}

	return (retval);
}
