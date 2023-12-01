#include "hash_tables.h"


/**
 * _strcmp - comparison
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: an integer
 */

int _strcmp(const char *s1, const char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL || s2 == NULL)
		return (-1);

	while ((*s1) == (*s2) && (*s1) != '\0')
	{
		s1++;
		s2++;
	}
	if (((*s1) == '\0') && ((*s2) != '\0'))
		return (-1);
	if (((*s2) == '\0') && ((*s1) != '\0'))
		return (-1);
	if ((*s1) == '\0')
		s1--;
	if ((*s2) == '\0')
		s2--;
	return ((*s1) - (*s2));
}

/**
 * _strdup - to duplicate a string
 * @s: the string
 *
 * Return: the string
 */

char *_strdup(const char *s)
{
	char *d;

	d = malloc(_strlen(s) + 1);
	if (d != NULL)
	{
		d = _strcpy(d, s);
		return (d);
	}
	return (NULL);
}

/**
 * _strlen - lenght
 * @s: lenght of s
 *
 * Return: an int
 */

int _strlen(const char *s)
{
	int i = 0;

	if (s != NULL)
		for (i = 0; s[i] != '\0'; i++)
			;
	return (i);
}
/**
 * _strcpy - copying
 * @src: source
 * @dest: destination
 *
 * Return: char *
 */

char *_strcpy(char *dest, const char *src)
{
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


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
	key_dup = strdup(key);
	if (value_dup == NULL || key == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = key_dup;
	new->value = value_dup;
	new->next = NULL;

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
		current = new;
	else
	{
		if (strcmp(current->key, key) == 0)
			current->value = value_dup;
		else
		{
			new->next = current;
			current = new;
		}
	}
	ht->array[index] = current;
	return (1);
}
