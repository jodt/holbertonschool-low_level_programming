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

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		for (temp = *head; temp->next != NULL; temp = temp->next)
			number_of_elements++;
		if (idx > number_of_elements)
		{
			free(new);
			return (NULL);
		}
		else
		{
			temp = *head;
			while (idx > 1)
			{
				temp = temp->next;
				idx--;
			}
			nodeafter = temp->next;
			temp->next = new;
			new->next = nodeafter;
		}
	}
	return (new);
}
