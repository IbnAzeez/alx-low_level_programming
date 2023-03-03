#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table we want to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (ht)
	{
	/* Accessing indices of array */
		for (i = 0; i < ht->size; i++)
		{
	/* Copying head node (pointer) of singly linked list */
			temp = ht->array[i];
				while (temp)
				{
					/* move and copy temp to current->next */
					current = temp;
					temp = temp->next;
					/* 1. free key */
					free(current->key);
					/* 2. free value */
					free(current->value);
					/* 3. free nodes */
					free(current);
				}
		}
		/* 4. free array */
		free(ht->array);
		/* 5. free table (struct) */
		free(ht);
	}
}
