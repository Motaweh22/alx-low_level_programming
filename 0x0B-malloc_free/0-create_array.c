#include "main.h"

#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * @size: sizee
 * @c: chare
 * Description:  function that creates an array of chars
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)

{

char *striing;

unsigned int l;


striing = malloc(sizeof(char) * size);

	if (size == 0 || striing == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		striing[l] = c;

return (striing);

}
