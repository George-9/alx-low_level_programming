#include "main.h"

/**
* _strncat - concantenates two strings
*
* @dest: first string
* @src: the second string
* @n: number of bytes to copy to the new string
*
* copies only n bytes from src
*
* Return: pointer to the newly formed string
*/
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	char *cont = dest;

	while (*cont != '\0')
		cont++;

	for (; l < n && *src != '\0'; l++)
	{
		*cont = *src;
		cont++;
		src++;
	}
	*cont = '\0';

	return (dest);
}
