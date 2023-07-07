#include <stdio.h>
/**
 * main - prints all arguments.
 * @argc : arguments counter.
 * @argv : arrays of strings of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
