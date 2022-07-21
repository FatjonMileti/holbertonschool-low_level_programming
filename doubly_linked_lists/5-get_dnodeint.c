#include "lists.h"
/**
 * get_dnodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (c == index)
			return (head);
		c++;
		head = head->next;
	}
	return (head);
}
