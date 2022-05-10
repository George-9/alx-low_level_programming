#include "main.h"

/**
* main - read file contents and print them to the POSIX
*
* @fPointer - the read content
* @data - hold data [the content]
*
* Return: 0 (Success)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fPointer;
	char data[letters];

	fPointer = fopen(filename, "r");

	while(fgets(data, letters, fPointer) != NULL)
	{
		printf("%s\n", data);
	}
	fclose(fPointer);
}
