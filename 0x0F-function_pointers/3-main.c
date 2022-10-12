#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg, arg1, output;
	char x;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg = atoi(argv[1]);
	arg1 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	x = *argv[2];

	if ((x == '/' || x == '%') && arg1 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	output = func(arg, arg1);
	printf("%d\n", output);
	return (0);
}
