#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function.
 * @argc: number of argyyyuments
 * @argv: array of arguuuments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytesss, l;
	char *arrrr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytesss = atoi(argv[1]);
	if (bytesss < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arrrr = (char *)main;
	for (l = 0; l < bytesss; l++)
	{
		if (l == bytesss - 1)
		{
			printf("%02hhx\n", arrrr[l]);
			break;
		}
		printf("%02hhx ", arrrr[l]);
	}
	return (0);
}
