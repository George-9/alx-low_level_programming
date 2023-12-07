#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the current list
 * @str: data for the new node
 *
 * Return: pointer to the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->next = *head;
	tmp->str = strdup(str);
	if (tmp->str == NULL)
		return (NULL);

	*head = tmp;
	return (tmp);
}
