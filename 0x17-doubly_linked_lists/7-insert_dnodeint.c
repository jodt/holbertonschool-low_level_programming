#include "lists.h"
ssize_t length_of_the_list(dlistint_t **h);
/**
 * insert_dnodeint_at_index - returns the sum of all the data of a linked list
 * @h: address of the pointer of the head element
 * @idx: index where the new node will be insert
 * @n: value of the new node
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int node, length = 0;

	if (h == NULL)
		return (NULL);
	length = length_of_the_list(&*h);
	if (idx > length)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	temp = *h;
	node = 0;
	if (idx == 0)
	{
		(*h)->prev = new;
		new->prev = NULL;
		new->next = *h;
		*h = new;
		return (new);
	}
	while (node != idx - 1)
	{
		temp = temp->next;
		node++;
	}
	if (idx == length)
	{
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
		return (new);
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
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
