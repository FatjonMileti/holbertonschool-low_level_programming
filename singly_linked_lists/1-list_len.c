#include "lists.h"
/**
 *list_len - print list
 *@h: list
 *Return: c
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}

