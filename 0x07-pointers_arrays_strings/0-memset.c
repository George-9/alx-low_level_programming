#include "holberton.h"

/**
* _memset - fills an array with given byet b, n times
*
* @s: array
* @b: char to fill
* @n: times
*
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
