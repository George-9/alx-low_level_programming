#include "main.h"

/**
 * _strdup - allocates space in memory and returns a pointer to it
 * @str: the string to copy to the new memory
 *
 * Return: the newly formed string
 */
char *_strdup(char *str)
{
	char *n;
	int i, s;

	if (str == NULL)
		return (NULL);

	s = strlen(str);
	n = malloc((sizeof(char) * s) + 1);

	if (n == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		n[i] = str[i];
		i++;
	}

	return (n);
}
