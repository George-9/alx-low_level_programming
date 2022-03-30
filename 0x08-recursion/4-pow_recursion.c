#include "main.h"

/**
* _pow_recursion - returns x raised by power of y
*
* @x: number to raise
* @y: power
*
* Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
