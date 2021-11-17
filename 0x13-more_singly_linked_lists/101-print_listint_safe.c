#include"lists.h"
/**
 * print_listint_safe - prints a linked list.
 * @head: pointer to the first element of the list
 *
 *Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr, *start;
	size_t node = 0, check = 0;

	if (head == NULL)
		return (node);
	ptr = start = head;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		check = 0;
		ptr = start;
		node++;
		head = head->next;
		while (check < node)
		{
			if (ptr == head)
			{
				printf("-> [%p] %d\n", (void *) head, head->n);
				return (node);
			}
			check++;
			ptr = ptr->next;
		}
	}
	return (node);
}
