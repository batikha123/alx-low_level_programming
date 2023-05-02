#include "lists.h"

/**
 * free_listint - free a list
 * @head: head node of list
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
