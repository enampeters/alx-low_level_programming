#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of each array element in bytes.
 *
 * Return: NULL if nmemb = 0 or size = 0 or function fails
 *	else a pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allomem;
	char *fillin;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allomem = malloc(size * nmemb);

	if (allomem == NULL)
		return (NULL);

	fillin = allomem;

	for (i = 0; i < (size * nmemb); i++)
		fillin[i] = '\0';

	return (allomem);
}
