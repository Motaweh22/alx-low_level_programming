#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  function that returns a pointer
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)

{

char *cha;
int x, y = 0;


	if (str == NULL)
		return (NULL);

x = 0;

	while (str[x] != '\0')
		x++;

cha = malloc(sizeof(char) * (x + 1));

	if (cha == NULL)
		return (NULL);



	for (y = 0; str[y]; y++)
		cha[y] = str[y];

return (cha);
}
