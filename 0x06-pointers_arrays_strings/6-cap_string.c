#include "main.h"
/**
 * *cap_string - capitalizes all words of a string.
 * @str : String.
 * Return: String with captilized words.
 */
char *cap_string(char *str)
{
	int i;
	char *str2 = str;
	char spr[] = {' ', '\t', '\n', ',', ';', '.', '"', '(', ')', '{', '}'};

	while (*str2 != '\0')
	{
		if (*str2 >= 'a' && *str2 <= 'z')
		{
			for (i = 0; i < 12; i++)
			{
				if (*(str2 - 1) == spr[i])
				{
					*str2 = *str2 - 32;
					break;
				}
			}
		}
	str2++;
	}
	return (str);
}
