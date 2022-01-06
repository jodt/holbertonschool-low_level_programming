#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: address of pointer of the head element
 * @index: index of the node
 * Return: returns the node which is at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		temp = temp->next;
		node++;
	}
	if (index > (node - 1))
		return (NULL);
	if (index == 0)
		return (head);
	node = 0;
	while (node != index)
	{
		head = head->next;
		node++;
	}
	return (head);
}
