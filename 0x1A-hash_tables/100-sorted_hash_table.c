#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = malloc(sizeof(shash_node_t) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp, *temp_shead;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (0);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->shead == NULL)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		ht->array[index] = new_node;
		new_node->next = new_node->snext = new_node->sprev = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	if (ht->shead)
	{
		if (ht->array[index])
		{
			temp = ht->array[index];
			while (temp)
			{
				if (strcmp((char *)key, temp->key) == 0)
				{
					free(temp->value);
					free(new_node);
					temp->value = strdup(value);
					return (1);
				}
				temp = temp->next;
			}
			temp = ht->array[index];
			new_node->key = strdup(key);
			new_node->value = strdup(value);
			new_node->next = temp;
			ht->array[index] = new_node;
		}
		else
		{
			new_node->key = strdup(key);
			new_node->value = strdup(value);
			new_node->next = NULL;
			ht->array[index] = new_node;
		}
		temp_shead = ht->shead;
		while (temp_shead)
		{
			if (temp_shead->snext == NULL)
			{
				if (strcmp(temp_shead->key, new_node->key) < 0)
				{
					temp_shead->snext = new_node;
					new_node->sprev = temp_shead;
					new_node->snext = NULL;
					ht->stail = new_node;
					return (1);
				}
				else
				{
					temp_shead->sprev = new_node;
					ht->stail = temp_shead;
					new_node->sprev = NULL;
					new_node->snext = temp_shead;
					ht->shead = new_node;
					return (1);
				}
			}
			if (strcmp(temp_shead->snext->key, new_node->key) < 0)
			{
				while (temp_shead->snext && strcmp(temp_shead->snext->key, new_node->key) < 0)
				{
					temp_shead = temp_shead->snext;
				}
				if (temp_shead->snext == NULL)
				{
					temp_shead->snext = new_node;
					new_node->sprev = temp_shead;
					new_node->snext = NULL;
					ht->stail = new_node;
					return (1);
				}
				new_node->snext = temp_shead->snext;
				temp_shead->snext->sprev = new_node;
				new_node->sprev = temp_shead;
				temp_shead->snext = new_node;
				return (1);
			}
			if (strcmp(temp_shead->snext->key, new_node->key) > 0)
			{
				new_node->snext = temp_shead;
				new_node->sprev = NULL;
				temp_shead->sprev = new_node;
				ht->shead = new_node;
				return (1);
			}
		}
	}
	return (0);
}
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

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
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int node = 0;

	temp = ht->shead;
	printf("{");
	while (temp)
	{
		if (node != 0)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		node++;
	}
	printf("}");
	printf("\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int node = 0;

	temp = ht->stail;
	printf("{");
	while (temp)
	{
		if (node != 0)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		node++;
	}
	printf("}");
	printf("\n");
}

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp;

	while (ht->shead)
	{
		temp = ht->shead;
		ht->shead = ht->shead->snext;
		free(temp->value);
		free(temp->key);
		free(temp);
	}
	free(ht->array);
	free(ht);
}
