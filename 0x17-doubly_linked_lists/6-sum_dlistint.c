#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: pointer of the head element
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
