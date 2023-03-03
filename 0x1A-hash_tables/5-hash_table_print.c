#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table we want to look into
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, flag = 0;
	hash_node_t *current;

	if (!ht)
		return;
	{
	printf("{");
	for (; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (current->key)
				flag++;
			if (flag == 1)
				printf("\'%s\': \'%s\'", current->key, current->value);
			else
				printf(", \'%s\': \'%s\'", current->key, current->value);
		current = current->next;
		}
	}
		printf("}\n");
	}
}
