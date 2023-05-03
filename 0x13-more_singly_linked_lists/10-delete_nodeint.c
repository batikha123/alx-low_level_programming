#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to the head of list
 * @index: integer
 * Return: 1 if success -1 if else
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(current);
		return (1);
	}

	prev = NULL;

	while (current)
	{
		if (i == index)
		{
			if (prev == NULL)
				(*head) = current->next;
			else
				prev->next = current->next;

			free(current);
			return (1);
		}
		i++;
		prev = current;
		current = current->next;
	}

	return (-1);
}
