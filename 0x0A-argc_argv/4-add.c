#include "main.h"

/**
* main - main mfunction
*
* @argc: number of arguments for main
* @argv: arguments for main
*
* Return - 0 if success (> 0) if error
*/
int main(int argc, char *argv[])
{
int mul = 1, len;
long val;
char *next;
	if (!argv[1])
	{
		puts("0");
		return (1);
	}

	for (len = 1; len < argc; len++)
	{
		val = strtol (argv[len], &next, 10);
		if (next == argv[len] || (*next != '\0'))
		{
			puts("error");
			return (1);
		}
		mul = mul * atoi(argv[len]);
	}
	printf("%i\n", mul);
	return (0);
}
