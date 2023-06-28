#include "main.h"
/**
 * *_strncat - concatenates two strings,  using at most n bytes from src.
 * @dest : destination string
 * @src :  source strng
 * @n : number of bytes
 * Return:  Concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *s1, *s2;

	s1 = dest;
	s2 = src;
	while (*s1 != '\0')
	{
		s1++;
	}
	for (i = 0; i < n; i++)
	{
		*s1 = *(s2 + i);
		s1++;
	}
	*s1 = '\0';
	return (dest);
}
