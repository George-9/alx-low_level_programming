#include "holberton.h"

/**
* _strchr - checks ocurrence of c in s and returns a conditional pointer
*
* @s: source of string
* @c: character to check
*
* Return: char*
*/

char *_strchr(char *s, char c)
{
int looper;

	while (1)
	{
		looper = *s++;
		if (looper == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
