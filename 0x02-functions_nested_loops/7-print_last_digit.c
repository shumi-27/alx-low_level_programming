#include "main.h"
/**
  * print_last_digit - computes the last digit of a number
  * @retval : Accepts number.
  * Return: Last digit of a number.
  */
int print_last_digit(int retval)
{
	retval = retval % 10;
	
	if (retval < 0)
	{
		retval = retval * -1;
	}
	_putchar(retval + '0');

	return (retval);
}
