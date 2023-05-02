#include "lists.h"

/**
 * free_listint2 - set the head node of a list to NULL
 * @head: head node of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
