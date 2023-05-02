#include "lists.h"

/**
 * pop_listint - delete head node of a list and print it's elements
 * @head: head of a list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n = 0;

	if (head == NULL)
		return (n);

	node = *head;
	(*head) = (*head)->next;
	n = node->n;
	free(node);
	return (n);
}
