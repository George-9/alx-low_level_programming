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
	int opened = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[opened] != '\0')
	{
		opened++;
	}
	opened = fopen(filename, O_WRONLY | O_APPEND);

	if (opened == -1)
		return (-1);

	write_file(file, text_content, opened);

	return (1);
}
