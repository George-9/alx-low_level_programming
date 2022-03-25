#include "main.h"

/**
* _strcat - concantenate two strings (dest and src)
*
* @dest: param 1
* @src: source of the other string
*
* Return: char pointer
*/
char *_strcat(char *dest, char *src)
{
	int len1 = strlen(dest), len2 = strlen(src);
	char tmp1[len1], tmp2[len2];

	for (int w = -1; w < len1; w++)
	{
		tmp1[w] = *(dest + w);
	}
	for (int w = -1; w < len2; w++)
	{
		tmp2[w] = *(src + w);
	}
	return (strcat(tmp1, tmp2));
}
