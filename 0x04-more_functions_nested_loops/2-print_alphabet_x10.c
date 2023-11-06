#include "main.h"

/**
* print_alphabet_x10 - prints all the lowercase English alphabets (x10)
*
* Return: 0 (on success)
*/
void print_alphabet_x10(void)
{
	int s;
	char start = 'a';

	for (s = 1; s <= 10; s++)
	{
		while (start <= 'z')
		{
			_putchar(start++);
		}
		start = 'a';
		_putchar('\n');
	}
}
