#include "hash_tables.h"
/**
 * key_index - attribute a table hash_index
 *
 * @key: string which represents the key
 * @size: size of the table_hash
 *
 * Return: index of the hash_table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
