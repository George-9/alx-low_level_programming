#include <unistd.h>

/**
* _putchar - writes char to stdout
* @c: char to print
*
* Return: 0 on success else > 0 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
