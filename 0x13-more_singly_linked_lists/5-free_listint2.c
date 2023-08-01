#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - to free a list
 * @head: the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t *head)
{
	if (*head != NULL)
	{
		free(*head);
	}
	*head = NULL;
}
