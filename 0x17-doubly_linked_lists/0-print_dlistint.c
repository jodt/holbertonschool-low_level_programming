#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a linked list
 * @h: pointer of the head element
 *
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
