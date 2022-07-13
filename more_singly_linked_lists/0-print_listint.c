#include "lists.h"

/**
 * print_listint - print list
 * @h: list
 * Return: c
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%i\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
