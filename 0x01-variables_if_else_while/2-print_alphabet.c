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
	char start;
	int i = 32;

	start = 'A';

	while (i < 58)
	{
		putchar(start + i);
		++i;
	}
	putchar('\n');
	return (0);
}
