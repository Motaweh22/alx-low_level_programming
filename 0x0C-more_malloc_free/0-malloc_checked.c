#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: number off allocate
 *
 * Return: a pointerr
 */
void *malloc_checked(unsigned int b)
{
	void *pointerr;

	pointerr = malloc(b);

	if (pointerr == NULL)
		exit(98);

	return (pointerr);
}
