#include "lists.h"

/**
 * add_dnodeint - add node at the beginnig of a linked list
 * @head: address of pointer of the head element
 * @n: value of the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
	else
	{
		new->prev = (*head)->prev;
		new->next = *head;
		*head = new;
		return (new);
	}
}
