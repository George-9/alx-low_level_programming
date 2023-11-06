#include "main.h"

/**
* print_alphabet - prints all the lowercase English alphabets
*
* Return: 0 (on success)
*/
void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s++);
	}

	_putchar('\n');
	return (0);
}
