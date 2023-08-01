#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get node
 * @head: the list
 * @index: the index to search
 *
 * Return: the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i = 0;

	if (head != NULL)
	{
		p = head;
		while (p != NULL && i != index)
		{
			p = p->next;
			i++;
		}
		if (p == NULL)
			return (NULL);
		return (p);
	}
	return (NULL);
}
