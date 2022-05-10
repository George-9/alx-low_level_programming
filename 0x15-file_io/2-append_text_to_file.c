#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - appends text to agiven file
*
* @filename: name of file to append data to
* @text_content: content to append to the file
*
* Return: depends on existence of file or
* success to appending to file [1] or [-1]
*/
int append_text_to_file(char *filename, char *text_content)
{
	FILE *check;
	int opened;
	int checkExists;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	opened = fopen(filename, "a+");

	if ((opened == -1))
		return (-1);

	checkExists = (check = fopen(filename, "r"));

	if (checkExists)
	{
		fputs(text_content, opened);
		fclose(opened);

		return (1);
	}
	else
		return (-1);
}
