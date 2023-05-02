#include "lists.h"

/**
 * print_listint - print all elements of a singly linked list
 * @h: singly linked list
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
