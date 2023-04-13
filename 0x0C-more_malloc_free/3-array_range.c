#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: minimum_rangee
 * @max: maximum_range
 *
 * Return: pointerr
 */
int *array_range(int min, int max)
{
	int *pointerr;
	int l, szz;

	if (min > max)
		return (NULL);

	szz = max - min + 1;

	pointerr = malloc(sizeof(int) * szz);

	if (pointerr == NULL)
		return (NULL);

	for (l = 0; min <= max; l++)
		pointerr[l] = min++;

	return (pointerr);
}
