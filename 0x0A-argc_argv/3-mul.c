#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: counter
 * @argv: array of variable
 *
 * Return: 0 if true and none zero if false
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
	{
		printf("wrong inpust\n");
		return (1);
	}

	return (0);
}
