#include "main.h"

/**
 * read_textfile - reads text from a file
 * @filename: the file to read
 * @letters: the number of characters to read from the file
 *
 * Return: numbers of letters read, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char c;
	size_t count = 0;

	if (filename == NULL)
		return (0);

       	file = fopen(filename, "r");
	if (!file)
		return (0);

	do {
		c = fgetc(file);
		_putchar(c);
		count++;
	} while ((c != EOF) && (count < letters - 1));

	return (count);
}
