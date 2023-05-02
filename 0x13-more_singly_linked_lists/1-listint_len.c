#include "lists.h"

/**
 * listint_len - return the number of nodes in a list
 * @h: list
 * Return: integer
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
