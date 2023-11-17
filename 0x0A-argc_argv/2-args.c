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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
