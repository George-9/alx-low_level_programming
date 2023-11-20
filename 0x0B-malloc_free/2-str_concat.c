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
	size_t i, l;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL && s2 == NULL)
	{
		n = malloc((sizeof(char) * strlen(s1)) + 1);
		if (n == NULL)
			return (NULL);
		for (i = 0; i < strlen(s1); i++)
			n[i] = s1[i];
		return (n);
	}
	if (s1 == NULL && s2 != NULL)
	{
		n = malloc((sizeof(char) * strlen(s2)) + 1);
		if (n == NULL)
			return (NULL);
		for (i = 0; i < strlen(s2); i++)
			n[i] = s2[i];
		return (n);
	}

	n = malloc((sizeof(char) * (strlen(s1) + strlen(s2))) + 1);
	for (i = 0; i < strlen(s1); i++)
		n[i] = s1[i];
	for (l = 0; l < strlen(s2); l++, i++)
		n[i] = s2[i];

	return (n);
}
