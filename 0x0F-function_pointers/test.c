#include "main.h"

void show(char *info);

int main() {
    print_name("abc", show);
    return 0;
}

void show(char *info)
{
	size_t length;

	for(length = 0; length < sizeof(info); length++)
	{
		putchar(*(info + length));
	}
}
