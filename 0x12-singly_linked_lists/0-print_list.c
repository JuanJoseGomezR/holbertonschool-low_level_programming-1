#include "lists.h"

/**
 * print_list - prints all the elements of a list_t.
 * @h: pointer.
 * Return: number (size_t) of elements in the list.
 */

size_t print_list(const list_t *h)
{
    size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

