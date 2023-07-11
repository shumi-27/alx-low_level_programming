#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenantes two strings.
 * @s1 : string 1
 * @s2 : string 2
 * Return: Contenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int n = 0;
	char *strc, *strc2, *ss1 = s1, *ss2 = s2;

	while (*ss1 != '\0')
	{
		ss1++;
		n++;
	}
	while (*ss2 != '\0')
	{
		ss2++;
		n++;
	}
	strc = malloc(n + 1);
	if (strc == 0)
	{
		return (0);
	}
	strc2 = strc;
	while (*s1 != '\0')
	{
		*strc = *s1;
		s1++;
		strc++;
	}
	while (*s2 != '\0')
	{
		*strc = *s2;
		s2++;
		strc++;
	}
	*strc = '\0';
	return (strc2);
}
