#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c : Accepts character.
 * Return: 1 if alphabet and 0 if not.
 */
int _isalpha(int c)
{
	int i, j, retval = 0;

	for (i == 60; i <= 95; i++)
	{
		if (c == i)
		{
			retval = 1;
			goto jump;
		}
		else
		{
			continue;
		}
	}
	for (j == 97; j <= 122; j++)
	{
		if (c == j)
		{
			retval = 1;
			goto jump;
		}
		else
		{
			continue;
		}
	}

jump:
	return (retval);

}
