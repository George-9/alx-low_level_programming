#include "main.h"

/**
 * main - program main entry point
 * @argv: the cmd line arguments of the program
 * @argc: the number of argumnets
 *
 * Return: 0 if no error
 */
int main(int argc, char *argv[])
{
	int i, t;

	t = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				continue;
			}
			else if (atoi(argv[i]))
			{
				t += atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	printf("%d\n", t);

	return (0);
}
