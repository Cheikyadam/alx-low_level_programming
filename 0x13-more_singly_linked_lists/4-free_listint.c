#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - to free a list
 * @head: the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
		free(head);
}
