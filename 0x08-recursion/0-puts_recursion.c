#include "main.h"

/**
* _puts_recursion - recusively print all the the chars in string s
*
* @s: string to print
*
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
