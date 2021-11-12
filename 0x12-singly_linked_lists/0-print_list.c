#include"lists.h"
/**
 * print_list - prints prints all the elements of a linked list
 * @h: pointer to list_t structure
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		node++;
	}
	return (node);

}
