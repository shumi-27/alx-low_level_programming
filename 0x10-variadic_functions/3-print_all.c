#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: Arguments data-types.
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;

	va_list strings;

	va_start(strings, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(strings, int));
					break;
				case 'i':
					printf("%d", va_arg(strings, int));
					break;
				case 'f':
					printf("%f", va_arg(strings, double));
					break;
				case 's':
					str = va_arg(strings, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1] != '\0')
			{
				printf(", ");
			}
			i++;
		}
	printf("\n");
	va_end(strings);
}

