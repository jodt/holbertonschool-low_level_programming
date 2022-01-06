#include "lists.h"
/**
 * free_dlistint - free a linked list
 * @head: pointer of the head element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
