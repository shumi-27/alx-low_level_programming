#include "main.h"
/**
 * *cap_string - capitalizes all words of a string.
 * @str : String.
 * Return: String with captilized words.
 */
char *cap_string(char *str)
{
	int i, flag;
	char *str2 = str;
	char spr[] = {' ', '\t', '\n', ',', ';', '.', '"', '(', ')', '{', '}'};

	while (*str2 != '\0')
	{
		flag = 0;
		for (i = 0; i < 11; i++)
		{
			if (*str2 == spr[i])
			{
				flag = 1;
				break;
			}	
		}

		if (flag == 1)
		{
			str2++;
			if (*str2 >= 'a' && *str2 <= 'z')
			{
				*str2 = *str2 -32;
			}
		}
		str2++;
	}
	return (str);
}
