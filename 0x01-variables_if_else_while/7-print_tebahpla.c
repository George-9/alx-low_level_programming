#include <stdio.h>

/**
* main - main entry
*
* Return: (0) if zero errors
*/
int main(void)
{
	char a;

	a = 'z';
	for (; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
