#include "main.h"
/**
  * _abs - computes the absolute value of an integer
  * @m : Accepts number.
  * Return: Absolute value.
  */
int _abs(int m)
{
	int retval;

	if (m < 0)
	{
		retval = m * (-1);
	}
	else
	{
		retval = m;
	}

	return (retval);
}
