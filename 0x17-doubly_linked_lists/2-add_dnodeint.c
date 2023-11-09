#include "lists.h"

/**
 * add_dnodeint - adding a new node
 * @head: the list
 * @n: the new node
 *
 * Return: the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t *));

	if (new != NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = (*head);
		(*head) = new;
	}
	return (new);
}
