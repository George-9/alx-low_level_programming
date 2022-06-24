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
	int the_num;

	for (the_num = '0'; the_num <= '9'; the_num++)
	{
		putchar(the_num);
	}
	putchar('\n');

	return (0);
}
