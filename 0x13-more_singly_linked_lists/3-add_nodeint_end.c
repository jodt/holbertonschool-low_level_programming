#include"lists.h"
/**
 * add_nodeint_end - add node a the end of the linked list
 * @head: address of pointer on the first element of the list
 * @n: value of the new node
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		for (temp = *head; temp->next != NULL; temp = temp->next)
			;
		temp->next = new;
	}
	return (new);
}
