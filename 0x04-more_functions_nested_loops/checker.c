/* C program to print a long int number 
 using putchar() only*/
#include <stdio.h> 
  
int main() 
{ 
char a;
for (a = '0'; a <= '9'; a++){
    /* code */
    putchar(a);
    if (a == '9')
    {
        /* code */
        putchar('\n');
    }
    
}

    return 0; 
}