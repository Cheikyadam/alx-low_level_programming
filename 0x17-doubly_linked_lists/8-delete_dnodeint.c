#include "lists.h"

/**
 * delete_dnodeint_at_index - deleting
 * @head: the list
 * @index: the index of node
 *
 * Return: -1 or 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = (*head), *new = NULL;
	unsigned int idx = 1;

	if (head == NULL)
		return (-1);
	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		new = p;
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(new);
}
	while (p != NULL)
	{
		if (idx == index)
		{
			new = p->next;
			p->next = new->next;
			p->next->prev = p;
			free(new);
			return (1);
		}
		idx++;
		p = p->next;
	}
	return (-1);
}
