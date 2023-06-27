#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s : string.
 * Return:  Always 0.
 */
void rev_string(char *s)
{
	char *temp, holder;

	temp =  s;
	while (*temp != '\0')
	{
		temp++;
	}
	temp--;
	while (s < temp)
	{
		holder = *s;
		*s = *temp;
		*temp = holder;
		s++;
		temp--;
	}
}

