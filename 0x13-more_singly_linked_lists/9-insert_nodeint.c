#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at index
 * @head: pointer to the head of list
 * @idx: integer
 * @n: integer
 * Return: pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	
	current = *head;

	while (current)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}

		i++;
		current = current->next;
	}

	free(new);
	return (NULL);
}
