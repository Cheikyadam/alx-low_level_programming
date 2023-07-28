#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - to free a list
 * @head: the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		if (p->str != NULL)
			free(p->str);
		free(p);
		head = head->next;
	}
}
