#include "main.h"
#define NULL 0
/**
 * *_strchr -  locates a character in a string.
 * @s : String to be searched.
 * @c : character.
 * Return: a pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	char *str = s;
	int flag = 0;

	while (*str != '\0')
	{
		if (*str == c)
		{
			flag = 1;
			break;
		}
		str++;
	}
	if (flag == 0)
	{
		str = NULL;
	}

return (str);
}
