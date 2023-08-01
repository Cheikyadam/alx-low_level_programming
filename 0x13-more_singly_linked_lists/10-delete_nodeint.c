#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deleting node
 * @head: a pointer on the list pointer
 * @index: the index
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *p;
	unsigned int i = 0;

	if (head != NULL)
	{
		if ((*head) == NULL)
			return (-1);
		if (index == 0)
		{
			tmp = (*head);
			(*head) = (*head)->next;
			free(tmp);
			return (1);
		}
		p = (*head);
		while (p != NULL && i != index - 1)
		{
			i++;
			p = p->next;
		}
		if (p == NULL)
			return (-1);
		tmp = p->next;
		p->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
