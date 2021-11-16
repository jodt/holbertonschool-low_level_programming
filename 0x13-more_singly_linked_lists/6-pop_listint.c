#include"lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: address of the pointer to the first element of the list
 *
 * Return: the head node data;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (&(**head))->next;
	value = temp->n;
	free(temp);
	return (value);
}
