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
	long val = 0;
	int mul = 0, len;
	char *next = "";

	if (!argv[val + 1])
	{
		puts("0");
		return (1);
	}

	for (len = 1; len < argc; len++)
	{
	val = strtol(argv[len], &next, 10); 
	if (next == argv[len] || (*next != '\0'))
		{
			puts("Error");
			return (1);
		}
		mul = mul + atoi(argv[len]);
	}
	printf("%i\n", mul);
	return (0);
}
