#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*
*
*
*
*/
int main(int lenOfArgs, char *args[])
{
	FILE *fPointerRead, *fPointerWrite;;
	int fRead, fWrite;

	if(lenOfargs != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	fPointerRead = fopen(args[1], "r");
	
	if(!((access(args[1], F_OK)) || !((acess(args[1], R_OK)))
		 	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[2]);
			exit(98);

	if((access(args[3], F_OK))
		fWrite = open(agrs[3], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		
	if(fWrite == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", args[2]);
		exit(99);
	
	if((close(fPointerRead)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", args[1]), exit(100);
	
	if (close(file_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
