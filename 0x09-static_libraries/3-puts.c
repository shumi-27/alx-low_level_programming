#include "main.h"
/**
 * _puts - prints a string.
 * @str : String value.
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
