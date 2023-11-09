#include "lists.h"

/**
 * add_dnodeint_end - adding a new node
 * @head: the list
 * @n: the new node
 *
 * Return: the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *p = (*head);

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((*head) == NULL)
	{
		new->prev = NULL;
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	while (p->next != NULL)
		p = p->next;
	new->prev = p;
	p->next = new;
	new->next = NULL;
	return (new);
}
