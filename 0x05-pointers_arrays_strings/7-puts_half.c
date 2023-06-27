#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str : string value.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int l, n, i;
	char *str2 = str;

	l = 0;
	while (*str2 != '\0')
	{
		l++;
		str2++;
	}
	n = l / 2;

	if (l % 2 == 0)
	{
		for (i = n; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; i < (l - 1); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}



