#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table we add or update key/value
 * @key: key in the key/value pair
 * @value: value associated with the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new, *current;
	char *value_copy = strdup(value);

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (value_copy == NULL)
		return (0);
	if (ht->array[index])
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = value_copy;
				return (1);
			}
			current = current->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		free(value_copy);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
