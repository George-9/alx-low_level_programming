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
	if (argc < 3)
		return (-1);
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
