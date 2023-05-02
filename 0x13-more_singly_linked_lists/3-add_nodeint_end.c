#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: head of list
 * @n: integer
 * Return: pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *tmp;

	last_node = malloc(sizeof(listint_t));

	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (*head);
	}

	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = last_node;

	return (*head);
}
