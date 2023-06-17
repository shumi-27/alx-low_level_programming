#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints whether a number  is negative /positive or zero
* 0-positive_or_negative_c
* Return: 0 (Success)
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
        }

        return (0);
}
