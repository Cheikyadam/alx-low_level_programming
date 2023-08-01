#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - adding new node
 * @head: a pointer on the list pointer
 * @idx: the index
 * @n: the new nod
 *
 * Return: the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *p;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head != NULL)
	{
		if (idx == 0 || (*head) == NULL)
		{
			new->next = (*head);
			(*head) = new;
			return (*head);
		}
		p = *head;
		while (p != NULL && i != idx - 1)
		{
			i++;
			p = p->next;
		}
		if (p == NULL)
			return (NULL);
		new->next = p->next;
		p->next = new;
		return (new);
	}
	return (NULL);
}
