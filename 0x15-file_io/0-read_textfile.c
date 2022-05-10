#include "holberton.h"

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
	char data;
	size_t count = 0;

	fPointer = fopen(filename, "r");

	do{
		data = fgetc(fPointer);
		printf("%c", data);
		count++;	
	}while(data != NULL);

	fclose(fPointer);
	return (0);
}
