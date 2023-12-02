#include "hash_tables.h"

/**
 * hash_table_set - to add elements in the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 on success 0 otherwilse
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_dup  = NULL;
	unsigned long int index = 0;
	hash_node_t *current = NULL;
	hash_node_t *new = NULL;
	char *key_dup = NULL;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current != NULL && strcmp(current->key, key) == 0)
	{
		free(current->value);
		ht->array[index]->value = value_dup;
		return (1);
	}
	key_dup = strdup(key);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL || key_dup == NULL)
		return (0);
	new->key = key_dup;
	new->value = value_dup;
	new->next = NULL;
	if (current == NULL)
		current = new;
	else
	{
		new->next = current;
		current = new;
	}
	ht->array[index] = current;
	return (1);
}
