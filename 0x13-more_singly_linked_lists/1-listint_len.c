#include "lists.h"
#include <stdio.h>

/**
 * listint_len - printing lists
 * @h: the list
 *
 * Return: Size of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			size++;
		}
	}
	return (size);
}
