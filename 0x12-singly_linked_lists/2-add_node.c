#include"lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list.
 * @head: adresse of the head node
 * @str: the value
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
