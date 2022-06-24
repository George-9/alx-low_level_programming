#include <stdio.h>
/**
*  main - funtion [program enry point]
*
*  @void: - no params
*
* Return: int (0) if success [always 0]
*/
int main(void)
{
	char start_lower, start_upper;
	int a = 32, b = 1;

	start_lower = 'A';
	start_upper = 'A';

	while (a < 58)
	{
		putchar(start_lower + a);
		++a;
	}

	while (b <= 26)
	{
		putchar(start_upper++);
		b++;
	}

	putchar('\n');
	return (0);
}
