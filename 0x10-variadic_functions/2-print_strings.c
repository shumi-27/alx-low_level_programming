#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print strings.
 * @separator : separator string.
 * @n : number of strings.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
