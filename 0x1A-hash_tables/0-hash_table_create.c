#include "hash_tables.h"

/**
 * hash_table_create - the hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h = NULL;
	hash_node_t **a = NULL;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
	{
		free(h);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		a[i] = NULL;
	h->size = size;
	h->array = a;
	return (h);
}
