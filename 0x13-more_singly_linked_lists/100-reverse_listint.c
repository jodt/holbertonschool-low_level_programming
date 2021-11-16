#include"lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: address of a poinetr to the first element
 *
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = next = current = *head;
	next = prev->next->next;
	current = current->next;
	prev->next = NULL;

	while (next->next != NULL)
	{
		current->next = prev;
		prev = current;
		current = next;
		next = next->next;
	}
	current->next = prev;
	next->next = current;
	*head = next;
	return (*head);
}
