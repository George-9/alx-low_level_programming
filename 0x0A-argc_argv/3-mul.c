#include "main.h"

/**
* main - main mfunction
*
* @argc: number of arguments for main
* @argv: arguments for main
*
* Return: 0 if success (> 0) if error
*/
int main(int argc, char *argv[])
{
	int count;
	(void)argc;

	if (!argv[1] || !argv[2])
	{
	puts("Error");
	return (1);
	}
	else
	{
		count = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", count);
	}
	return (0);
}
