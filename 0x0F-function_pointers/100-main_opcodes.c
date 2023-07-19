#include <stdlib.h>
#include <stdio.h>
/**
 * main - gets opcode of the main function.
 * @argv : Arguments.
 * @argc : Number of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	unsigned char *ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");	
	return (0);
}
