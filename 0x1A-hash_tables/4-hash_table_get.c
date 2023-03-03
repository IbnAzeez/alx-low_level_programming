#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value ass'd with a key
 * @ht: hash table we want to look into
 * @key: key we are looking for
 * Return: value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				return (current->value);
			}
			current = current->next;
		}
	}
	return (NULL);
}
