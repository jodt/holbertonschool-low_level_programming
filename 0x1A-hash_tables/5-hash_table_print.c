#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, node = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp)
		{
			if (node != 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			node++;
		}
	}

	printf("}\n");
}
