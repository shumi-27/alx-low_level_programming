#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints number 0-9 using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{

	char num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}

