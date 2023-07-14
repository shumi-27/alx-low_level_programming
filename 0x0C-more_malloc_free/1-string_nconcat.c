#include "main.h"
#include <stdlib.h>
/**
 * _strlen - string length
 * @str : string.
 * Return: string length
 */
int _strlen(char *str)
{
	char *s;
	int retval = 0;

	s = str;
	while (*s != '\0')
	{
		s++;
		retval++;
	}
	return (retval);
}
/**
 * *string_nconcat - concatenates two strings.
 * @s1 : string 1
 * @s2 : string 2
 * @n : num of characters.
 * Return: Pointer to string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int lstr1, lstr2, rev;
	char *str, *str_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lstr1 = _strlen(s1);
	lstr2 = _strlen(s2);
	str = malloc(lstr1 + lstr2 + 1);
	if (str == NULL)
		return (0);
	str_concat = str;
	while (*s1 != '\0')
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*str = *s2;
		str++;
		s2++;
	}
	if ((int) n >= lstr2)
	{
		goto end;
	}
	else
	{
		rev = lstr2 - n;
		while (rev)
		{
			str--;
			rev--;
		}
	}
end:
	*str = '\0';
	return (str_concat);
}
