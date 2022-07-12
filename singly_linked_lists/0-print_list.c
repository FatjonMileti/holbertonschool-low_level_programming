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
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%i]%s\n", h->len, h->str);
		c++;
		h = h->next;
	}
	return (c);
}
