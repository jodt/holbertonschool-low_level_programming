#include"lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address to a pointer to the first element of the list
 * @idx: index where the new node should be added
 * @n : value of the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *nodeafter;
	unsigned int number_of_elements = 0;

	for (temp = *head; temp->next != NULL; temp = temp->next)
		number_of_elements++;

	if (head == NULL || *head == NULL ||  n == 0 || idx > number_of_elements)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (idx > 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}
	new->n = n;
	nodeafter = temp->next;
	temp->next = new;
	new->next = nodeafter;

	return (new);
}
