#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: counter
 * @argv: array of variable
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}

	return (0);
}
