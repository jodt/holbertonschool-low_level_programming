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

	ptr = start = head;
	if (head == NULL)
		exit(98);
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
				node++;
				return (node);
			}
			check++;
			ptr = ptr->next;
		}
	}
	return (node);
}
