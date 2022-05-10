#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* read_textfile - read file contents and print them to the POSIX
*
* @filename: name of file
* @letters: number of characters to read from file
*
* Return: actual number of files it could read 0 otherwise
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *data;
	size_t file, let, w;

	data  = malloc(letters);

	if (data == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == -1)
	{
		free(data);
		return (0);
	}

	let = read(file, data, letters);

	w = write(STDOUT_FILENO, data, let);

	close(file);

	return (w);
}
