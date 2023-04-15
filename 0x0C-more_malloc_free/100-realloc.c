#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a block of memory using malloc and free
 * @ptr: pointer to the block of memory
 * @old_size: integer
 * @new_size: integer
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *tmp, *tmpp;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	tmp = malloc(new_size);

	tmpp = ptr;

	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			tmp[i] = tmpp[i];
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			tmp[i] = tmpp[i];
	free(ptr);

	return (tmp);
}
