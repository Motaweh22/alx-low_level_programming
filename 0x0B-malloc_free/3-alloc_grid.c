#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  function that returns a pointer
 * @width: widthh
 * @height: heightt
 * Return: tmpo
 */
int **alloc_grid(int width, int height)
{
int **tmpo;
int v, b;
	if (width <= 0 || height <= 0)
		return (NULL);
tmpo = malloc(sizeof(int *) * height);
	if (tmpo == NULL)
		return (NULL);
	for (v = 0; v < height; v++)
	{
		tmpo[v] = malloc(sizeof(int) * width);
		if (tmpo[v] == NULL)
		{
			for (; v >= 0; v--)
				free(tmpo[v]);
			free(tmpo);
			return (NULL);
		}
	}
	for (v = 0; v < height; v++)
	{
		for (b = 0; b < width; b++)
			tmpo[v][b] = 0;
	}
return (tmpo);
}
