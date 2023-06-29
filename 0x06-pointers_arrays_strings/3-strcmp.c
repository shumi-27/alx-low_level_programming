#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1 : string 1
 * @s2 : string 2
 * Return: Ascii difference.
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while ((*s1 && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	result = (*s1 + '0') - (*s2 + '0');
	return (result);
}
