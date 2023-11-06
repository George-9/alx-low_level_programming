#include "main.h"

/**
* main - program entry point
*
* Return: 0 (on success)
*/
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s++);
	}

	_putchar('\n');
	return (0);
}
