#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints number 0-9 using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{

char ch = '0';

for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
putchar('\n');


return (0);
}

