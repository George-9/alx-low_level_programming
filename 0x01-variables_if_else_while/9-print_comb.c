#include <stdio.h>

/**
* main - program entry point
*
* @void: no params for the main function
*
* Return: (int) 0 on success [always 0]
*/
int main(void)
{
	int the_num;

	the_num = '0';
	while (the_num <= '9')
	{
		putchar(the_num);
		if (the_num < '9')
		{
			putchar(',');
			putchar(' ');
		}
		the_num++;
	}
	putchar('\n');
	return (0);
}
