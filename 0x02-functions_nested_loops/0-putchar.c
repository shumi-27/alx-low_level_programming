#include "main.h"
/**
 * main - Print _puchar
 * Return: Always 0.
 */
int main(void)
{
	char pr[] = "_putchar";
	int i;

	for (i = 0; i < 8 ; i++)
	{
		_putchar(pr[i]);
	}
	 _putchar('\n');

	return (0);
}
