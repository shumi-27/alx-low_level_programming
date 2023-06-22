#include "main.h"
/**
 * _isdigit - Checks for 0-9.
 * @c : Accepts character
 * Return: 1 if digit and 0 otherwise.
 */
int _isdigit(int c)
{
	int n, retval = 0;

	for (n = 48; n <= 57; n++)
	{
		if (c == n)
		{
			retval = 1;
			break;
		}
		else
		{
			continue;
		}

	}

	return (retval);
}
