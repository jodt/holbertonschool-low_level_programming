#include"lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the linked list
 * @head : adresse of the first element
 * @n: value of the new node
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
