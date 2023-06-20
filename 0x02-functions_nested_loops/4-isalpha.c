#include "main.h"
/**
 *  _isalpha -  checks for alphabetic character.
 *  @c : Accepts character.
 *  Return: 1 if character is alphabet and 0 if not.
 */
int _isalpha(int c)
{
	int i, j, retval = 0;

	j = _islower(c);
	if (j == 1)
	{
		retval = 1;
		goto jump;
	}
	else
	{
		for (i = 65; i <= 95; i++)
		{
			if (c == i)
			{
				retval = 1;
				break;
			}
			else
			{
				continue;
			}
		}
	}

jump:
	return (retval);
