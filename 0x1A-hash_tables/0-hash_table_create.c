#include "hash_tables.h"
/**
 * hash_table_create- creates a hash table
 *
 * @size: size of the array containing pointers to nodes
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size <= 0)
		return (NULL);
/* allocate for pointer to hash table struct */
	ht = calloc(1, sizeof(hash_table_t));

/* check if size is null */
	if (!ht)
	{
		return (NULL);
	}
/* allocate array of pointers */
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
/* nodes for linked list */
	return (ht);
}
