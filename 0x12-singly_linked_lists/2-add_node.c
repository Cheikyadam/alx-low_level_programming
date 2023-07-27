#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adding a node at the beginning
 * @head: the list
 * @str: the new node
 *
 * Return: the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

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
