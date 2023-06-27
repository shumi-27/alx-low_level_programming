#include  "main.h"
/**
 * puts2 - prints every other character of a string
 * @str : String
 * Return: Always 0.
 */
void puts2(char *str)
{
	char *temp;
	int i, length = 0;

	temp = str;

	while (*temp != '\0')
	{
		length++;
		temp++;
	}
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0 || i == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
