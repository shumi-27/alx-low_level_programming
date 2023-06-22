#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c : Accepts character
 * Return: 1 if uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	int n, retval = 0;

	for (n = 65; n <= 90; n++)
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
