#include "main.h"

/**
* _isalpha - checks if a character is an alphabetic letter
*
* @c: the character
*
* Return: 1 if letter is uppercase, otherwise, 0
*/
int _isalpha(int c)
{
	int l_b_l, l_b_u;

	l_b_l = ((c - 32) >= 65 ? 1 : 0);

	l_b_u = ((c - 32) >= 33 ? 1 : 0);

	return (l_b_l || l_b_u);
}
