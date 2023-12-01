#include "hash_tables.h"

/**
 * key_index - to find the index of a given key
 * @key: the key
 * @size: the size of the array
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return ((hash_djb2(key)) % size);
}
