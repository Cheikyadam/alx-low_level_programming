#include "hash_tables.h"

/**
 * hash_table_get - to retrieve the value of a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: NULL or the value if found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}
