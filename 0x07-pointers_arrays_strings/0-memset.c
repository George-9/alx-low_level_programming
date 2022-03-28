#include "main.h"

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
	memset(s, b, n);
	return (s);
}
