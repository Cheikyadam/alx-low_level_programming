#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - print a list
 * @head: the list
 *
 * Return: the size
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;

	if (head == NULL)
	{
		exit(98);
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		size++;
	}
	return (size);
}
