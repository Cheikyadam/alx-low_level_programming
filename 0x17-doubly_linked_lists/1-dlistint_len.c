#include "lists.h"

/**
 * dlistint_len - len
 * @h: the list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
