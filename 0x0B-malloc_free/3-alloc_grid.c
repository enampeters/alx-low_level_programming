#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - points to a 2-d array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: NULL if @width || @height == 0 or function fails
 *	else a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **td;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	td = malloc(sizeof(int *) * height);

	if (td == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		td = malloc(sizeof(int) * width);

		if (td[h] == NULL)
		{
			for (; h >= 0; h--)
				free(td[h]);

			free(td);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			td[h][w] = 0;
	}
	return (td);
}
