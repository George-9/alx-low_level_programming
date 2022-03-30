#include "main.h"

/**
* _strlen_recursion - gets length of a string through recursion
*
* @s: string to iterate
*
* Return: int
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	return (0);
	if (*s == '\0')
	{
		return (1);
	}
	return (_strlen_recursion(s + 1) + 1);

}
