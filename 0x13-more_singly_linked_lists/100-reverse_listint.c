#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: pointer to the head node of the list
 * Return: pointer r NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	current = *head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}

