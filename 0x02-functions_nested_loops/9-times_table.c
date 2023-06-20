#include "main.h"
/**
  * times_table - Creates nine-times table.
  * Return: Always 0.
  */
void times_table(void)
{
	int u, i;

	for (i = 0; i < 10; i++)
	{
		for (u = 0; u < 10; u++)
		{
			_putchar((u * i) + '0');
			if (u != 9)
			{
				if ((u * (i + 1)) > 10 || (u * (i + 1)) == 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');

				}
				else
				{	_putchar(',');
					_putchar(' ');
				}

			}

		}
	_putchar('\n');
	}

}
