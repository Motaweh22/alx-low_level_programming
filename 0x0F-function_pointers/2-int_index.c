#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: arraaay
 * @size: sizeeeee
 * @cmp: pointeeer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (l = 0; l < size; l++)
	{
		if (cmp(array[l]))
			return (l);
	}
	return (-1);
}
