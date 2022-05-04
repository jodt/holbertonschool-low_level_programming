#include "search_algos.h"
/**
 * linear_skip - function that searches value in a sorted skip list of integers
 *
 * @list: first node pointer
 * @value: value to find
 * Return: Node or Null
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp, *start, *end;

	if (list && value)
	{
		start = end = list;
		temp = list->express;

		while (end->next)
			end = end->next;
		if (value < temp->n)
			end = temp;
		while (temp->express && value > temp->n)
		{
			printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
			if (value < temp->express->n)
			{
				start = temp;
				end = temp = temp->express;
				break;
			}
			temp = temp->express;
			start = temp;
		}
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		printf("Value found between indexes [%ld] and [%ld]\n",
		       start->index, end->index);
		while (start != end->next)
		{
			printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
			if (value == start->n)
				return (start);
			start = start->next;
		}
	}
	return (NULL);
}
