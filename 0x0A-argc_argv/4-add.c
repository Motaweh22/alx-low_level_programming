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
	int addition = 0
		;
	while (--argc)
	{
		addition = addition + atoi(argv[argc]);
	}
	printf("%d/n", addition);

	return (0);
}
