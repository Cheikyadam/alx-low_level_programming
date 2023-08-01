#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - summint list
 * @head: the list
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int somme = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
