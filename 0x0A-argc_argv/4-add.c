#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two numbers
 * @argc : arguments counter
 * @argv : arguments.
 * Return: sum of numbers.
 */
int main(int argc, char *argv[])
{

	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		goto Exit;
	}
	
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				goto Exit;
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
Exit:
	return (0);
}
