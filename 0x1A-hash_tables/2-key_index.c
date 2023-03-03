#include "hash_tables.h"
/**
 * key_index - returns index where key/value pair is stored
 *
 * @key: key in array
 * @size: size of array of hash table
 * Return: index where key/value pair is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* If size is 0 we get runtime error */
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
