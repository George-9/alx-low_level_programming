#include <stdio.h>
/**
 *  main - funtion [program enry point]
 *   
 *  @void: - no params
 *  Return: int (0) if success [always 0]
 * /
int main(void) {
    char start;

    start = 'A';

    for (int i = 32; i < 58; i++){
        putchar(start + i);
    }
    return 0;
}
