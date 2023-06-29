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
check:
		for (i = 0; i < 11; i++)
		{
			if (*str2 == spr[i])
			{	str2++;
				if (*str2 >= 'a' && *str2 <= 'z')
				{
					*str2 = *str2 - 32;
					break;
				}
				else if (*str2 >= 'A' && *str2 <= 'Z')
				{
					break;
				}
				else
				{
					goto check;
				}
			}
		}
		str2++;
	}
	return (str);
}
