#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* append-text_to_file - appends text to agiven file
*
* @opened: check if opening the file and appending was a success
*
*
*
*/
int append-text_to_file(char *filename, char *text_content)
{
	FILE *check;
	int opened;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	opened = fopen(filename, "a+");

	if(opened = -1)
		return (-1);

	if ((check = fopen(filename, "r"))
	{
		fputs(text_content, opened);
		fclose(opened);

		return (1);
	}else
		return (-1);
}
