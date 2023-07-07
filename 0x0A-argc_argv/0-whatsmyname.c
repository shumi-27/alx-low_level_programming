#include <stdio.h>
/**
 * main - prints the first argument of CL.
 * @argc : number of arguments.
 * @argv : string of arguments.
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
