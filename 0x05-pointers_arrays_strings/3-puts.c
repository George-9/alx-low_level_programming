#include "main.h"

/**
* _puts - prints every character of a string
*
* @str: that string
* Return: void
*/
void _puts(char *str)
{
	char c = *str;

	while (*str != '\0')
	{
		c = *str++;
		_putchar(c);
	}
	_putchar('\n');
}
