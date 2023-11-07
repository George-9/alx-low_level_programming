#include <stddef.h>

/**
* _strcpy - copies the value of a string to another
*
* @dest: where to copy the string
* @src: the string source
*
* Return: a pointer to the new string
*/
char *_strcpy(char *dest, char *src)
{
	size_t i, n;

	char *tmp = src;

	while (*tmp++ != '\0')
		n++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
