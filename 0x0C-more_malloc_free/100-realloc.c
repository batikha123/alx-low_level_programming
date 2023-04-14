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
	void *tmp;

	if (old_size == new_size)
		return (ptr);

	tmp = ptr;

	if (ptr != NULL)
		free(ptr);

	if (new_size > 0)
		ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);

	ptr = tmp;

	return (ptr);
}
