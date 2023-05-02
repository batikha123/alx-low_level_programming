#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: head node
 * @index: integer
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;

	while (tmp)
	{
		if (i == index)
			break;
		i++;
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (NULL);

	return (tmp);
}
