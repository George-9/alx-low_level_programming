#include "lists.h"

/**
 * free_list - frees the memory of list_t
 *
 * @head: the fisrt element of the list
 * Return: none
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
