#include "lists.h"

/**
 * add_node - add a node at the beginning of a list
 * @head: list
 * @str: char
 * Return: pointer or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	const char *p;

	p = str;

	while (*p)
	{
		len++;
		p++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;

	*head = new;

	return (*head);
}
