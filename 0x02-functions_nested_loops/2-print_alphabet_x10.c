#include "main.h"
/**
 * main - Function description
 * print_alphabet_x10(): prints the laphabet x10
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
