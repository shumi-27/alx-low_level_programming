#include "3-calc.h"
#include <stdlib.h>
/**
 * main - performs simple operations.
 * @argc : number of arguments.
 * @argv : arguments.
 * Return: Results of operations.
 */
int main(int argc, char *argv[])
{
	int (*calc)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error");
		exit(99);
	}
	if ((calc == op_div || calc == op_mod) && atoi(argv[3]) == 0)
	{
		printf("Error");
		exit(100);
	}
	res = calc(atoi(argv[1]), atoi(argv[3]));
	printf("%d", res);
	return (0);
}
