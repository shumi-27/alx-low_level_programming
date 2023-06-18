#include <stdio.h>
#define COM 44
#define SP 32
/**
 * main - Entry point
 * Description: Prints the combination of single numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 0; c < 10; c++)
{
putchar(c + '0');

if (c != 9)
{
putchar(COM);/* Print comma*/
putchar(SP);/* Print space */
}
}
putchar('\n');

return (0);

}
