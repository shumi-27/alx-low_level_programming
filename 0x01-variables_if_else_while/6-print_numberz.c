#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints number 0-9 using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{

int ch = 0;

for (ch = 0; ch <= 9; ch++)
{
putchar(ch + '0');
}
putchar('\n');


return (0);
}

