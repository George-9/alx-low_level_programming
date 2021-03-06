#include "main.h"

/**
* _strpbrk - search a string for a set of bytes
*
* @s: string to search
* @accept: bytes to search
*
* Return: char *
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

	for (i = 0; s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
