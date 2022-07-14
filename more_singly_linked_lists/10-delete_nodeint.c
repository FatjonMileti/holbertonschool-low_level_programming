#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: head
 * @idx: idx
 * @n: n
 * Return: new
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int count;
	listint_t *tmp = *head, *tmp1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (count = 0; count < index - 1; count++)
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			return (-1);
		}
			tmp = tmp->next;
	}
	tmp1 = tmp->next;
	tmp->next = tmp1->next;
	free(tmp1);
	return (1);
}
