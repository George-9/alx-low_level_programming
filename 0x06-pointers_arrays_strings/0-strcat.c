#include "main.h"

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
	char *cont = dest;

	while (*cont != '\0')
		cont++;

	while (*src != '\0')
	{
		*cont = *src;
		cont++;
		src++;
	}

	*cont = '\0';

	return (cont);
}
