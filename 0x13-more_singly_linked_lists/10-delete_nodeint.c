#include"lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a  linked list.
 * @head: address of the poinetr to the first element
 * @index: index of the element to delete
 *
 * Return: 1 if success; -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deleted_node;
	unsigned int number_of_elements = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	for (temp = *head; temp->next != NULL; temp = temp->next)
		number_of_elements++;
	if (index > number_of_elements)
		return (-1);
	temp = *head;
	if (temp->next == NULL)
	{
		*head = NULL;
		free(temp);
	}
	else if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		while (index > 1)
		{
			temp = temp->next;
			index--;
		}
		deleted_node = temp->next;
		temp->next = temp->next->next;
		free(deleted_node);
	}
	return (1);
}
