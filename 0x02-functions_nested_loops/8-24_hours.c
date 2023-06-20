#include "main.h"
/**
  * jack_bauer - computes the absolute value of an integer
  * Return: Always 0;
  */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('i');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}

	}

}
