#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointerr
 * @old_size: sizee
 * @new_size: new sizer
 *
 * Return: pointerrr1
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointerrr1;
	char *old_pointerrr;
	unsigned int l;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointerrr1 = malloc(new_size);
	if (!pointerrr1)
		return (NULL);

	old_pointerrr = ptr;

	if (new_size < old_size)
	{
		for (l = 0; l < new_size; l++)
			pointerrr1[l] = old_pointerrr[l];
	}

	if (new_size > old_size)
	{
		for (l = 0; l < old_size; l++)
			pointerrr1[l] = old_pointerrr[l];
	}

	free(ptr);
	return (pointerrr1);
}
