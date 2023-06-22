#include  "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size : Triangle size
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	if (size != 0 && size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((size - j) < i)
				{
					_putchar(35);
				}
				else
				{
				_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
