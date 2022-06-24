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
	int the_char;

	for (the_char = '0'; the_char <= '9'; the_char++)
	{
		putchar(the_char);
	}

	for (the_char = 'a'; the_char <= 'f'; the_char++)
	{
		putchar(the_char);
	}
	putchar('\n');

	return (0);
}
