#include "main.h"
/**
 * *leet -  encodes a string into 1337.
 * @str : string.
 * Return: Encoded string.
 */
char *leet(char *str)
{
	char *str2 = str;

	while (*str2 != '\0')
	{
		if (*str2 == 'a' || *str2 == 'A')
		{
			*str2 = '4';
		}
		else if (*str2 == 'e' || *str2 == 'E')
		{
			*str2 = '3';
		}
		else if (*str2 == 'o' || *str2 == 'O')
		{
			*str2 = '0';
		}
		else if (*str2 == 't' || *str2 == 'T')
		{
			*str2 = '7';
		}
		else if (*str2 == 'l' || *str2 == 'L')
		{
			*str2 = '1';
		}
		str2++;
	}
	return (str);
}
