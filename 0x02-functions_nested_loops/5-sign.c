#include "main_2.h"
/**
 * print_sign -  prints the sign of a number.
 * @n : Accepts number.
 * Return: 0 if number is 0, 1 if positive and -1 if negative.
 */
int print_sign(int n)
{
int retval, c;
c = n;

if (c > 0 && c != 0)
{
_putchar('+');
retval = 1;
}
else if (c < 0 && c != 0)
{
_putchar('-');
retval = -1;
}
else
{
_putchar('0');
retval = 0;
}

return (retval);
}
