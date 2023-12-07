#include "lists.h"

/**
 * add_node_end - adds a node at the end of list_t
 *
 * @head: the list(the first node)
 * @str: data for the added node
 *
 * Return: new list with added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *current_node = *head;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	if (tmp->str == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = tmp;
	return (tmp);
}
