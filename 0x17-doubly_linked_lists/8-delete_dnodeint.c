#include "lists.h"
ssize_t length_of_the_list(dlistint_t **h);
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: address of the pointer of the head element
 * @index: index where the new node will be insert
 *
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	ssize_t length, node;

	if (head == NULL || *head == NULL)
		return (-1);
	length = length_of_the_list(&*head);
	if (index >= length)
		return (-1);
	temp = *head;
	node = 0;
	if (index == 0 && (*head)->next != NULL && length != 0)
	{
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		free(temp);
		*head = NULL;
		return (1);
	}
	while (node != index - 1)
	{
		temp = temp->next;
		node++;
	}
	temp2 = temp->next;
	if (index == (length - 1))
	{
		temp->next = NULL;
		free(temp2);
		return (1);
	}
	temp->next->next->prev = temp;
	temp->next = temp->next->next;
	free(temp2);
	return (1);
}

/**
 * length_of_the_list - returns the length of a linked list
 * @h: address of the pointer of the head element
 *
 * Return: length of the list
 */
ssize_t length_of_the_list(dlistint_t **h)
{
	dlistint_t *temp;
	ssize_t length = 0;

	temp = *h;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	return (length);
}
