#include "main.h"

/**
* _isupper - checks if a letter is uppercase
*
* @c: the character
*
* Return: 1 if letter is uppercase, otherwise, 0
*/
int _isupper(int c)
{
	return ((c - 32) >= 65 ? 0 : 1);
}
