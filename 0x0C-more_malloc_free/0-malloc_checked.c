#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory with malloc.
 * @b: bytes allocated from heap
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allomem = malloc(b);

	if (allomem == NULL)
		exit(98);

	return (allomem);
}
