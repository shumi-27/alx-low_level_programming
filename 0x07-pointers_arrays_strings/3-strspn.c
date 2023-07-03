#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s : string to be scanned.
 * @accept: string containing characters to match.
 * Return: total numbers of bytes which match @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *str = s, *acc = accept;
	unsigned int i, j = 0, cnt = 0;

	while (*acc != '\0')
	{
		j++;
		acc++;
	}
	while (*str != ' ')
	{
		for (i = 0; i < j; i++)
		{
			if (*str == accept[i])
			{
				cnt++;
			}
		}
		str++;
	}
	return (cnt);
}
