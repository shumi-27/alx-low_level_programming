#include "main.h"
/**
 * _islower - checks for lowercase character.
 * c: Character.
 * Return: 1 if character is lowercase or 0 if not.
 */
int _islower(int c)
{
	int i, retval = 0;

	for (i = 97; i <= 122; i++)
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

	return (retval);
}
