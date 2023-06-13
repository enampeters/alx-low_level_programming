#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates ans array of chars and initializes
 *		it with a specific char
 * @size: the size of hte array to be initialized
 * @c: the specific char to initialize the array with
 *
 * Return: NULL if size == 0 or function fails else a
 *		pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[index] = c;

	return (array);
}
