#include "lists.h"
/**
 * print_dlistint - ...
 * @h: ...
 * Return: ...
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
