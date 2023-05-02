#include "lists.h"

/**
 * add_nodeint - add a node at the start of a list
 * @head: head node of the list
 * @n: integer
 * Return: pointer or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	first_node = malloc(sizeof(listint_t));

	if (first_node == NULL)
		return (NULL);

	first_node->n = n;
	first_node->next = *head;

	*head = first_node;

	return (*head);
}
