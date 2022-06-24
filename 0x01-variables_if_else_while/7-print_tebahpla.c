#include <stdio.h>

/**
* main - program entry point
*
* @void: no params
*
* Return: (int) 0 on success [always 0]
*/
int main(void)
{
	char the_char;

	for (the_char = 'z'; the_char >= 'a'; the_char--)
	{
		putchar(the_char);
	}
	putchar('\n');

	return (0);
}
