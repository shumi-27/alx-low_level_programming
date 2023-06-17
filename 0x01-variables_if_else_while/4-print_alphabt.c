#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabets except and q.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'p' || c == 'q')
	{
	continue;
	}
	else
	{
	putchar(c);
	}
	}
putchar('\n');
return (0);
}
