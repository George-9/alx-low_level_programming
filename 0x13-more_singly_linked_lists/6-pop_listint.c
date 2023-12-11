#include "lists.h"

/**
 * pop_listint - removes the first element of listint_t
 *
 * @head: the starting point of the list(first node)
 * Return: the data of removed node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
