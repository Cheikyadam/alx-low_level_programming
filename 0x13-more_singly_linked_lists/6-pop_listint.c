#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the first
 * @head: the list
 *
 * Return: an integer
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val = 0;

	if (head != NULL)
	{
		if (*head == NULL)
			return (0);
		tmp = *head;
		val = (tmp->n);
		*head = (*head)->next;
		free(tmp);
		return (val);
	}
	return (0);
}
