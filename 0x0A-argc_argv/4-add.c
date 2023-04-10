#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * checker - checker
 * @strr: array_string
 *
 * Return: Always 0 (Success)
 */
int checker(char *strr)
{
	unsigned int cc;

	cc = 0;
	while (cc < strlen(strr))

	{
		if (!isdigit(strr[cc]))
		{
			return (0);
		}

		cc++;
	}
	return (1);
}

/**
 * main -  program that adds positive numbers.
 * @argc: Counter
 * @argv: array of variable
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int ii;
	int strint;
	int addition = 0;

	ii = 1;
	while (ii < argc)
	{
		if (checker(argv[ii]))

		{
			strint = atoi(argv[ii]);
			addition += strint;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		ii++;
	}

	printf("%d\n", addition);

	return (0);
}
