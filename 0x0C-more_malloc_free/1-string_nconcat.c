#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings.
 * @s1 : string 1
 * @s2 : string 2
 * @n : num of characters.
 * Return: Pointer to string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int lstr1 = 0, lstr2 = 0;
	char *str1, *str2, *str, *str_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str1 = s1;
	str2 = s2;
	while (*str1 != '\0');
	{
		str1++;
		lstr1++;
	}
	while (*str2 != '\0');
	{
		str2++;
		lstr2++;
	}
	str_concat = concatenate(s1, s2, lstr1, lstr2);
	return (str_concat);
}
