#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of list_t
 *
 * @head: the list(the first node)
 * @n: data for the added node
 *
 * Return: new list with added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *current_node = *head;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;

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
