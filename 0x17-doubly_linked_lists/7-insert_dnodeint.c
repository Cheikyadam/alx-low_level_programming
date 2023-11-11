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
	size_t s = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if ((*h) == NULL && idx != 0)
		return (NULL);

	s = dlistint_len((*h));
	if (idx == s)
	{
		return (add_dnodeint_end(h, n));
	}
	if (idx > s)
		return (NULL);
	while (idx != index)
	{
		p = p->next;
		index++;
	}

	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = p;
	new->next = p->next;
	p->next->prev = new;
	p->next = new;
	return (new);
}
