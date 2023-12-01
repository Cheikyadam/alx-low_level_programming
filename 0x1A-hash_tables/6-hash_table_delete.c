#include "hash_tables.h"

/**
 * hash_table_delete - to delete the hash table
 * @ht: the hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				if ((ht->array[i]->next->value) != NULL)
					free(ht->array[i]->next->value);
				if ((ht->array[i]->next->key) != NULL)
					free(ht->array[i]->next->key);
				free(ht->array[i]->next);
				ht->array[i]->next = NULL;
			}
			if ((ht->array[i]->value) != NULL)
				free(ht->array[i]->value);
			if ((ht->array[i]->key) != NULL)
				free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = NULL;
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
