#include "main.h"
#include <stdio.h>

void reverse_string(char *str);

/**
* print_rev - prints a string in reverse
*
* @s: the string
* Return: void
*/
void print_rev(char *s)
{
	reverse_string(s);
	_putchar('\n');
}


/**
* reverse_string - reverses a string
*
* @str: the string
* Return: void
*/
void reverse_string(char *str)
{
	if (*str != '\0')
	reverse_string(str + 1);

	_putchar(*str);
}
