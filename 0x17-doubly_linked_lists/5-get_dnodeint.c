#include "lists.h"

/**
 * get_dnodeint_at_index - get node
 * @head: the list
 * @index: the index of node
 *
 * Return: Nothing
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	while (p != NULL)
	{
		if (index == idx)
			return (p);
		idx++;
		p = p->next;
	}
	return (NULL);
}
