#include "main.h"
/**
  * times_table - Creates nine-times table.
  * Return: Always 0.
  */
void times_table(void)
{
	int u, i, A;

	for (i = 0; i < 10; i++)
	{
		for (u = 0; u < 10; u++)
		{
			A = u * i;
			if (A < 10);
			{
				putchar(A + '0');
			}
			if (u != 9)
			{
				if ((u * (i + 1)) > 10 || (u * (i + 1)) == 10)
				{
					_putchar((A / 10) + '0');
					_putchar((A % 10) + '0');
					_putchar(',');
					_putchar(' ');

				}
				else
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

			}

		}
	_putchar('\n');
	}

}
