#include "hash_tables.h"
/**
 * hash_table_set - add a element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the new node
 * @value: value of the new node
 *
 * Return: 1 if succeeded or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp;
	unsigned long int index;

	if (!ht || !key || !*key)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, (char *)key) == 0)
			{
				free(temp->value);
				free(new_node);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		temp = ht->array[index];
		new_node->next = temp;
		ht->array[index] = new_node;
		return (1);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	ht->array[index] = new_node;
	return (1);
}
