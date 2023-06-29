#include "main.h"
/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase.
 * @Str - String.
 * Return: Always 0.
 */
char *string_toupper(char *Str)
{
	char *Str2 = Str;

	while (*Str2 != '\0')
	{
		if (*Str2 >= 'a' && *Str2 <= 'z')
		{
			*Str2 = *Str2 - 32;
		}
		Str2++;
	}
	return (Str);
}
