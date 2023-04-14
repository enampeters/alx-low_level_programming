#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of allocated memory for @ptr
 * @new_size: sixe of new memory block
 *
 * Return: ptr if @new_size = @old_size,
 *	NULL if @new_size == 0 and ptr is not NULL,
 *	else a pinter to the reallocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *allomem;
	char *ptr_copy, *fillin;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		allomem = malloc(new_size);

		if (allomem == NULL)
			return (NULL);
		return (allomem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	allomem = malloc(sizeof(*ptr_copy) * new_size);

	if (allomem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fillin = allomem;

	for (i = 0; i < old_size && i < new_size; i++)
		fillin[i] = *ptr_copy++;
	free(ptr);
	return (allomem);
}
