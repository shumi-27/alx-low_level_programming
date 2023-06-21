#include "main.h"
#include <stdio.h>
/**
* main - Prints whether a number  is negative /positive or zero
* 0-positive_or_negative_c
* Return: 0 (Success)
*/
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
