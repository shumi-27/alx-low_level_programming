#include "main.h"
/**
  * times_table - computes 9 x table.
  * Return: Always 0.
  */
void times_table(void)
{
int i, j, cnt, u, x;

for (i = 0; i < 10; i ++)
{
	for (j = 0; j < 10; j ++)
	{
		cnt = i * j;
		if (cnt > 9)
		{
		u = cnt/10;
		x = cnt % 10;
		
		_putchar(u + '0');
		_putchar(x + '0');

		}
		else
		{
		if (j != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(cnt + '0');
		}
		_putchar(cnt + '0');
		}

	}
	_putchar('\n');

}


}
