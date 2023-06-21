#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - Prints from n to 98.
  * @n : Accepts number.
  * Return: Always 0.
  */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i => 98; i--)
		{
			printf("%d", i);
			if(i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d");
			if(i != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");

}
