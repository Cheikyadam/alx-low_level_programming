#include "lists.h"

/**
 * print_dlistint - print list
 * @h: the list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
