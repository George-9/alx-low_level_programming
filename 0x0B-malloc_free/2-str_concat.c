#include "main.h"

/**
 * str_concat - concantenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the newly formed string
 */
char *str_concat(char *s1, char *s2)
{
	char *n;
	int i, l, l1, l2;

	if (s1 != NULL)
		l1 = strlen(s1);
	else
		l1 = 0;

	if (s2 != NULL)
		l2 = strlen(s2);
	else
		l2 = 0;

	n = malloc(l1 + l2 + 1);
	if (n == NULL)
		return (NULL);

	if (s1 != NULL)
		for (l = 0; l < l1; l++)
			n[l] = s1[l];
	if (s2 != NULL)
		for (i = 0; l < l1 + l2; l++, i++)
			n[l] = s2[i];

	return (n);
}
