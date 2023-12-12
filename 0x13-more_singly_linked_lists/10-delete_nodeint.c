#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a given index of a listint_t
 *
 * @head: fisrt node of the list
 * @index: where to delete node
 *
 * Return: 1 on successful deletion otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev = NULL, *tmp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	i = 0;
	for (tmp = *head; tmp; tmp = tmp->next, i++)
	{
		if (i == index)
		{
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		prev = tmp;
	}
	return (1);
}
