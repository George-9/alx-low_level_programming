#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the current list
 * @n: data for the new node
 *
 * Return: pointer to the new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->next = *head;
	tmp->n = n;

	*head = tmp;
	return (tmp);
}
