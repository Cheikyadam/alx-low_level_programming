#include "lists.h"
#include <stdio.h>

/**
 * print_list - printing lists
 * @h: the list
 *
 * Return: Size of the list
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			size++;
		}
	}
	return (size);
}
