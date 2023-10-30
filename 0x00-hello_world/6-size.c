#include <stdio.h>

/**
* main - the program entry point
*
* Return: 0
*/
int main(void)
{
	char *fmt = "%d\n";
	printf(fmt, sizeof(char));
	printf(fmt, sizeof(int));
	printf(fmt, sizeof(long int));
	printf(fmt, sizeof(long long int));
	printf(fmt, sizeof(float));

	return (0);
}
