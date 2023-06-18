#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints base 16 numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, tmp;

for (c = 0; c <= 15; c++)
{
tmp = c % 16;

if (tmp < 10)
{
tmp = tmp + 48;
putchar(tmp);
}
else
{
tmp = tmp + 87;
putchar(tmp);
}
}
putchar('\n');

return (0);
}
