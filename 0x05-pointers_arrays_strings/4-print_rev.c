#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s : Pointer.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, j;
	char *ptr;

	ptr = s;

	i = 0;
	while (*ptr != '\0')
	{
		i++;
		ptr++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
