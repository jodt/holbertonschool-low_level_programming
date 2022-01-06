#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a linked list
 * @head: address of pointer of the head element
 * @n: value of the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);
}
