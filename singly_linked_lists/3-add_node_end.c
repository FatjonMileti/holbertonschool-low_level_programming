#include "lists.h"
/**
 * add_node - add a node
 * @head: head
 * @str: string
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int len = 0;
	char *dup;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup = strdup(str);
	if (!dup)
	{
		free(new->str);
		free(new);
	}

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if(*head == NULL)
	(*head) = new;
	else
	{
		last = new;
		while (str->last)
		{
			last = last->str;
			last->str = new;
		}
	}

	return (*head);
}
