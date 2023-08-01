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

	if (head != NULL)
	{
		if (*head == NULL)
			return (0);
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return ((*head)->n);
	}
	return (0);
}
