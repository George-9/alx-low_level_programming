#include "main.h"

/**
 * main - program main entry point
 * @argv: the cmd line arguments of the program
 * @argc: the number of argumnets
 *
 * Return: 0 if no error
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
