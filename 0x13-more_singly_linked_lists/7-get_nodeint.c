#include"lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the first element of the list;
 * @index: the index of the node
 *
 * Return: the value of the node a the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int number_of_elements = 0;

	if (head == NULL)
		return (NULL);
	for (temp = head; temp->next != NULL; temp = temp->next)
		number_of_elements++;
	if ((index + 1) > number_of_elements)
		return (NULL);
	temp = head;
	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
