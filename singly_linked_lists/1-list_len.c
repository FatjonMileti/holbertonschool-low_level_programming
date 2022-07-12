#include "lists.h"
/**
 *print_list - print list
 *@h: list
 *Return: c
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}

