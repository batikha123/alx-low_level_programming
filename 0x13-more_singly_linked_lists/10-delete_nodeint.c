#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to the head of list
 * @index: integer
 * Return: integer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current;

    if (*head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        (*head) = (*head)->next;
        free(current);
    }

    return (-1);
}
