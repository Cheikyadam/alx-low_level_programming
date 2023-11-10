#include "lists.h"

/**
 * sum_dlistint - sum all nodes
 * @head: the list
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (p != NULL)
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
