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
	int i = 0;
	list_t *temp, *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i])
		i++;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		for (temp = *head; temp->next != NULL; temp = temp->next)
			;
		temp->next = new;
	}
	return (new);
}
