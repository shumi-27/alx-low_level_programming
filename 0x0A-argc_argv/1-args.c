#include <stdio.h>
/**
 * main - prints the number of arguments it receives.
 * @argc : arguments counter.
 * @argv : array of strings of arguemnts.
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
