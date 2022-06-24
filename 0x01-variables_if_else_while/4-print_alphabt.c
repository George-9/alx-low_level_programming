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
	char p_char;

	for (p_char = 'a'; p_char <= 'z'; p_char++)
	{
		if (p_char != 'e' && p_char != 'q')
			putchar(p_char);
	}

	putchar('\n');

	return (0);
}
