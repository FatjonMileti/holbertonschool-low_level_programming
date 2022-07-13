#include "lists.h"
/**
 * add_node_end - add node at the end of the list
 * @head: head
 * @str: str
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
