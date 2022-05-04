#include "search_algos.h"
#include <math.h>

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *start, *temp;
	size_t jump, i = 0;
	if (list)
	{
		jump = sqrt(size);
		temp = list;
		while (temp->n < value && temp->next)
		{
			start = temp;
			while (temp->next && temp->index < jump)
				temp = temp->next;

			printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
			jump += sqrt(size);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", start->index, temp->index);
		for (i = start->index; i <= temp->index; i++)
		{
			printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
			if (value == start->n)
				return start;
			start = start->next;
		}
	}
	return (NULL);
}
