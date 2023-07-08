#include "main.h"
#define NULL 0
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s : string to be searched.
 * @accept : string containing characters.
 * Return: pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	char *str = s, *acc = accept;
	int flag = 0, i, j = 0;

	while (*acc != '\0')
	{
		j++;
		acc++;
	}
	while (*str != '\0' && flag == 0)
	{
		for (i = 0; i < j; i++)
		{
			if (*str == accept[i])
			{
				flag = 1;
				break;
			}
		}
		str++;
	}
	if (flag == 0)
	{
		str = NULL;
	}
	else
	{
		str--;
	}
	return (str);
}

