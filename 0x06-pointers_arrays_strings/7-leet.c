#include "main.h"
/**
 * *leet -  encodes a string into 1337.
 * @str : string.
 * Return: Encoded string.
 */
char *leet(char *str)
{
	char *str2 = str;
	char Lt[] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'};
	int i;

	while (*str2 != '\0')
	{
		for (i = 0; i < 10; i += 2)
		{
			if (*str2 == Lt[i] || *str2 == (Lt[i] - 32))
			{
				*str2 = Lt[i + 1];
				break;
			}
		}
		str2++;
	}
	return (str);
}
