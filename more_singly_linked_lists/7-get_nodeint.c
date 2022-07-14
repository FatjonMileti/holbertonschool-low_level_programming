#include "lists.h"
/**
 *  get_nodeint_at_index - get node at index
 *  @head: head
 *  @index: index
 *  Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
