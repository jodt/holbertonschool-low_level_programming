#include"lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: address of a poinetr to the first element
 *
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp1 = temp2 = *head;
	temp1 = temp2->next->next;
	temp2 = temp2->next;
	(&(**head))->next = NULL;

	while (temp1->next != NULL)
	{
		temp2->next = *head;
		*head = temp2;
		temp2 = temp1;
		temp1 = temp1->next;
	}
	temp1->next = temp2;
	return (temp1);
}
