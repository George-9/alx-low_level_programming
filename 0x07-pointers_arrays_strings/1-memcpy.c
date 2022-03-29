#include "main.h"

/**
* _memcpy - copy a memory address to another
*
* @dest: destination of copied bytes
* @src: source of bytes
* @n: n bytes
*
* Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int loop;

	for (loop = 0; loop < n; loop++)
	{
		dest[loop] = src[loop];
	}
	return (dest);
}
