#include "lists.h"

/**
 * print_list - print elemets of list
 * @h: list
 * Return: int
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
