#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting
 * @h: the list
 * @idx: the index of node
 * @n: the node
 *
 * Return: the list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = (*h), *new = NULL;
	unsigned int index = 1;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if ((*h) == NULL && idx != 0)
		return (NULL);

	while (p != NULL)
	{
		if (idx == index)
		{
			new = malloc(sizeof(dlistint_t *));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = p->next;
			p->next->prev = new;
			new->prev = p;
			p->next = new;
			return (new);
		}
		idx++;
		p = p->next;
	}
	return (NULL);
}
