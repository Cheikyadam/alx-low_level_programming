#include "hash_tables.h"

/**
 * hash_table_print - to print hash table
 * @ht: the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				if (ht->array[i]->next != NULL)
					printf(", '%s': '%s'",
							ht->array[i]->next->key, ht->array[i]->next->value);
				break;
			}
		}
		i++;
		for (; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				if (ht->array[i]->next != NULL)
					printf(", '%s': '%s'",
							ht->array[i]->next->key, ht->array[i]->next->value);
			}
		}
		printf("}\n");
	}
}
