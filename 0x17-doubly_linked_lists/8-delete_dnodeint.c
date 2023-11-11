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
		if ((*head)->next == NULL)
		{
			free((*head));
			(*head) = NULL;
			return (1);
		}
		new = p;
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(new);
		new = NULL;
		return (1);
	}
	while (p->next != NULL && idx != index)
	{
		p = p->next;
		idx++;
	}
	if (p->next == NULL)
		return (-1);

	new = p->next;
	if (new->next != NULL)
		p->next->prev = p;
	p->next = new->next;
	free(new);
	new = NULL;
	return (1);
}
