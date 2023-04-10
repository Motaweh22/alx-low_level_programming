#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: counter
 * @argv: array of variable
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int addition = 0;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
			if (*x < '0' || *x > '9')
				return (printf("Error\n"), 1);
		addition = addition + atoi(argv[argc]);
	}
	printf("%d/n", addition);

	return (0);
}
