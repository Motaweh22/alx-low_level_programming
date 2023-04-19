#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the resuuult.
 * @argc: The number of arguments.
 * @argv: arraay
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numm1, numm2;
	char *opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numm1 = atoi(argv[1]);
	opp = argv[2];
	numm2 = atoi(argv[3]);

	if (get_op_func(opp) == NULL || opp[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opp == '/' && numm2 == 0) ||
	    (*opp == '%' && numm2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opp)(numm1, numm2));

	return (0);
}
