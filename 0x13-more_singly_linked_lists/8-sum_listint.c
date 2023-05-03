#include "lists.h"

/**
 * sum_listint - sum of the data of all nodes of a list
 * @head: head of a node
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (sum);

	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
