#include"lists.h"
void check_address(listint_t *start_list, listint_t *node, listint_t *current);
/**
 * free_listint_safe - frees a linked list.
 * @h: address of a pointer to the first element of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *current_node;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	node = current_node = *h;
	current_node = current_node->next;
	check_address(*h, node, current_node);
	while (*h != NULL)
	{
		node = *h;
		*h = (&(**h))->next;
		free(node);
		count++;
	}
	return (count);
}
/**
 * check_address - check adresses of nodes
 * @start_list: pointer to the frst element of the list
 * @node: pointer to a node
 * @current: pointer to current node
 */
void check_address(listint_t *start_list, listint_t *node, listint_t *current)
{
	int number_of_node = 0, index = 0;

	while (current != NULL)
	{
		node = start_list;
		index = 0;
		number_of_node++;
		while (index < number_of_node)
		{
			if (node == current)
			{
				current->next = NULL;
				return;
			}
			node = node->next;
			index++;
		}
		current = current->next;
	}
}
