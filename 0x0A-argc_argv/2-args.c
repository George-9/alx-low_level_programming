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
	while(argc--)
	{
		puts(*argv);
		argv++;
	}
	return (0);
}

