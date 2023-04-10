#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: counter
 * @argv: array of variable
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
