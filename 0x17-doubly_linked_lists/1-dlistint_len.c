#include "lists.h"

/**
 * dlistint_len - count all the elements of a linked list
 * @h: pointer of the head element
 *
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
