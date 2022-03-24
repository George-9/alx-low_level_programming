#include "main.h"

/**
* _strncat - concantenate two strings (dest and src)
*
* @dest: param 1
* @src: source of the other string
* @n: number of bytes to copy
*
* Return: char pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(*dest, *src, n));
}
