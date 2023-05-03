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
	listint_t *new, *tmp, *next;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	tmp = *head;

	while (tmp)
	{
		next = tmp->next;
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;

			if (idx == 0)
			{
				new->next = tmp;
				tmp = new;
				return (new);
			}

			tmp->next = new;
			new->next = next;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}

	return (NULL);
}
