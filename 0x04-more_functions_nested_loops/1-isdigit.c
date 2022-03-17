#include "main.h"

/**
* _isdigit - Returns a num 1 if c is a digit else 0
*
* @d: only parameter
*
* Return: int
*
*/
int _isDigit(int d)
{
int checker;

	for (checker = 0; checker < 9; checker++)
	{
		if (isdigit(checker))
		{
			return (1);
		}
		return (0);
	}
}
