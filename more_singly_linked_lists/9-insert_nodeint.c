#include "lists.h"
/**
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n){
	unsigned int i = 0;
	listint_t *new, *tmp;

	 if (!*head)
                return (NULL);


	new = malloc (sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;

	while (tmp)
	{
		tmp = tmp->next;

		if (i == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (new);
}
