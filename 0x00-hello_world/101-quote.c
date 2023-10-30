#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
* main - the program entry point
*
* Return: 0
*/
int main(void)
{
	char *msg;

	msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(0, msg, strlen(msg));

	return (0);
}
