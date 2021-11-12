#include"lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to a list_t structure
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
