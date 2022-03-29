#include "main.h"

char *_strchr(char *s, char c)
{
int looper;
char *p;

	for (p = 0; p < s[looper] != '\0'; looper++)
	{
		if (s[looper] == c)
		{
			p = c;
			break;
		}
	}
	if (p != null)
	{
		return p;
	}
	else
	return (NULL);
}
