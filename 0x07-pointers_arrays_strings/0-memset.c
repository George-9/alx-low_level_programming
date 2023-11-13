#include "main.h"

/**
* _memset - sets given number of bytes of a string to a char
* @s: the string
* @b: the byte to assign
* @n: the number of bytes to assign
*
* Return: pointer to the memory of s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;
	char *p = s;

	for (; count < n; count++, p++)
		*p = b;

	return (s);
}
