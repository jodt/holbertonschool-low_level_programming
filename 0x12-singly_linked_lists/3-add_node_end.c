#include"lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: address of the nod head
 * @str: value of the new node
 *
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i])
		i++;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
		for (temp = *head; temp->next != NULL; temp = temp->next)
			;
	temp->next = new;
	return (new);
}
