#include "main.h"

/**
* _strnspn - find ocurrence of bytes from s in accept
*
* @s: string to check
* @accept: where to check from
*
* Return: unsigned int
*/

unsigned int _strnspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
