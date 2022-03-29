#include "main.h"

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
char *p;

	for (p = 0; p < s[looper] != '\0'; looper++)
	{
		if (s[looper] == c)
		{
			p = c;
			break;
		}
	}
	if (p != NULL)
	{
		return (p);
	}
	else
	return (NULL);
}
