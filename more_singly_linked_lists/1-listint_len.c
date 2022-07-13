#include "lists.h"

/**
 * listint_len - find length of linked list
 * @h: linked list
 * Return: c
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
