#include "lists.h"

/**
 * print_list - prints data of elements of a singly linked list
 * @h: the list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	while (1)
	{
		if (h == NULL)
			return (c);
		printf("[%d]: ", (int)strlen(h->str));
		if (h->str == NULL)
			printf("%s\n", "(nil)");
		else
			printf("%s\n", h->str);
		h = h->next;
		c++;
	}
	return (c);
}
