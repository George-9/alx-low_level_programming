#include "main.h"

size_t str_len(char *str);

/**
* _strcat - concantenates two strings
*
* @dest: first string
* @src: the second string
*
* Return: newly forme strirng(char *)
*/
char *_strcat(char *dest, char *src)
{
	int l_1, l_2;
	char *cont;

	l_1 = str_len(dest);
	l_2 = str_len(src);

	cont = malloc((l_1 + l_2 + 1) * sizeof(char));

	while (*dest++ != '\0')
		*cont++ = *dest;

	while (*src++ != '\0')
		*cont++ = *src;

	return (cont);
}

/**
 * str_len - gets the number of characters in a string
 *
 * @str: the string
 *
 * Return: length of str
 */
size_t str_len(char *str)
{
	char *tmp = str;
	size_t l = 0;

	while (*tmp++ != '\0')
		l++;

	return (l);
}
