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

	temp = head;
	if (head == NULL)
		return (NULL);
	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
