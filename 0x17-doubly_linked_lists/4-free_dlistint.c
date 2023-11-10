#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	dlistint_t *current  =  NULL;

	if (head != NULL)
	{
		while (p != NULL)
		{
			current = p;
			p = p->next;
			free(current);
		}
	}
}
