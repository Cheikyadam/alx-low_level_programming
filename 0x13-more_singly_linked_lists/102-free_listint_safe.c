#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free safe
 * @h: the list
 *
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *p = *h;
	size_t s = 0;

	if (*h != NULL)
	{
		while ((*h) != NULL)
		{
			p = *h;
			*h = (*h)->next;
			free(p);
			p = NULL;
			s++;
		}

	}
	(*h) =  NULL;
	return (s);
}
