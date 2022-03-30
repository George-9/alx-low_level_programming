#include "main.h"

/**
* _print_rev_recursion - prints a string recursively in reverse
*
* @s: string to iterate and print
*
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (!*s)
	return;
	if (*(s + 1))
	{
		_print_rev_recursion(s + 1);
	}
	putchar(*s);
}
