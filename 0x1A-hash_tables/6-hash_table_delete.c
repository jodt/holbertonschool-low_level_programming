#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 *@ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
