#include "main.h"

/**
* _islower - checks if a letter is lowercase or uppercase
*
* @c: the character
*
* Return: 1 if letter is uppercase, otherwise, 0
*/
int _islower(int c)
{
	return ((c - 32) >= 65 ? 1 : 0);
}
