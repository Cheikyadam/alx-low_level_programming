#include "lists.h"
#include <stdio.h>

/**
 * print_listint - printing lists
 * @h: the list
 *
 * Return: Size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			size++;
		}
	}
	return (size);
}
