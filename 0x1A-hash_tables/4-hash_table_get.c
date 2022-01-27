#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table
 * @key: key of the new node
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, (char *)key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
