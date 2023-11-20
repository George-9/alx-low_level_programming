#include "main.h"

int my_strlen(char *);

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
	unsigned int i, l, l1, l2;

	if (s1 == NULL && s2 == NULL)
	{
		n = malloc(2);
		if (n == NULL)
			return (NULL);
		n[0] = '\0';

		return (n);
	}

	l1 = my_strlen(s1);
	l2 = my_strlen(s2);

	if (s1 == NULL)
	{
		n = malloc(l2 + 1);
		if (n == NULL)
			return (NULL);

		for (l = 0; l < l2; l++)
			n[l] = s2[l];

		return (n);
	}
	if (s2 == NULL)
	{
		n = malloc(l1 + 1);
		if (n == NULL)
			return (NULL);

		for (l = 0; l < l1; l++)
			n[l] = s1[l];
		return (n);
	}

	n = malloc(sizeof(char) * (l1 + l2  + 1));
	if (n == NULL)
		return (NULL);

	for (l = 0; l < l1; l++)
		n[l] = s1[l];

	for (i = 0; l < (l1 + l2); l++, i++)
		n[l] = s2[i];
	return (n);
}

/**
 * my_strlen - gets the length of a string
 * @s: the string
 *
 * Return: the length of s
 */
int my_strlen(char *s)
{
	if (s == NULL)
		return (0);
	return (strlen(s));
}
