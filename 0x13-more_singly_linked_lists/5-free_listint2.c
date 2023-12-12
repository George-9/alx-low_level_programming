#include "lists.h"

/**
 * free_listint2 - frees the memory of list_t
 *
 * @head: the fisrt element of the list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
