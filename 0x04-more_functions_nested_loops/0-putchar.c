#include "main.h"

/**
* main - program entry point
*
* Return: 0 (on success)
*/
int main(void)
{
	char *str = "_putchar";

	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
	return (0);
}
