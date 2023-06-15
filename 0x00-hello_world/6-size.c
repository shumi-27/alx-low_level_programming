#include <stdio.h>
/**
 * main - prints the size of various data-types.
 * Return: 0 (Success)
 */
int main(void)
{
char c;
int i, li, lli;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("Size of a int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n",  (long)sizeof(li));
printf("Size of a long long int: %d byte(s)\n", (long long)sizeof(lli));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
