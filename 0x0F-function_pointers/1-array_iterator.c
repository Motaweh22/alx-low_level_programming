#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function.
 * @array: arraaaay
 * @size: sizeee
 * @action: pointeeeer
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || action == NULL)
		return;

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
