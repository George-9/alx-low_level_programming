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
	char *p = malloc(strlen(dest)+strlen(src)+1);
	int ptr =0, temp = 0;

	while(dest[temp]!='\0')
	{
		p[ptr++] = s[temp++];
	}
	temp=0;
	while(dest[temp]!='\0')
	{
		p[ptr++]=t[temp++];
	}
	return (p);
}
