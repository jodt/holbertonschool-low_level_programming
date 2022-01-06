#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @h: address of the pointer of the head element
 * @index: index where the new node will be insert
 * @n: value of the new node
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int node, length = 0;

	if (h == NULL)
		return (NULL);
	temp = *h;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (idx > length)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (*h == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	temp = *h;
	node = 0;
	if (idx == 0)
	{
		(*h)->prev = new;
		new->prev = NULL;
		new->next = (*h)->next;
		*h = new;
		return (new);
	}
	while (node != idx - 1)
	{
		temp = temp->next;
		node++;
	}
	if (idx == length)
	{
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
		return (new);
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
