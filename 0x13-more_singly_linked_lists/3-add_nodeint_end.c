#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adding a node at the end
 * @head: the list
 * @n: the new node
 *
 * Return: the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *p;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	new->next = NULL;
	return (*head);
}
