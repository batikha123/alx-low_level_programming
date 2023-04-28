#include "lists.h"

/**
 * list_len - return the number of elements in a list
 * @h: list
 * Return: integer
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
