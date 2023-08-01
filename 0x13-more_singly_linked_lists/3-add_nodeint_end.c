#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - adding a node at the end
 * @head: the list
 * @str: the new node
 *
 * Return: the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *p;

	if (new == NULL)
		return (NULL);
	new->str = malloc(sizeof(strlen(str)));
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
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
