#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - adding a node at the beginning
 * @head: the list
 * @n: the new node
 *
 * Return: the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
