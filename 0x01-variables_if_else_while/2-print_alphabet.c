#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints alphabets a-z'
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
return (0);
}
