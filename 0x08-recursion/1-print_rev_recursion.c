#include "main.h"

int _str_len(char *, int l);
void _r(char *, int s);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	_r(s, _str_len(s, 0));
}

/**
 * _r - reverses a string
 * @s: the string
 * @l: base checker
 *
 * Return: none
 */
void _r(char *s, int l)
{
	if (l < 0)
		return;

	_putchar(s[l]);
	_r(s, l - 1);
}

/**
 * _str_len - gets the lenght of a string
 * @s: the string
 * @l: base
 *
 * Return: the length of the string
 */
int _str_len(char *s, int l)
{
	if (s[l + 1] == '\0')
		return (l);

	return (_str_len(s, l + 1));
}
