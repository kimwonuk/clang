#include <stdio.h>
#define LENGTH 10

int main(void)
{
    int number = 3;
    const int NUMBER = 5;
    number = 10;
    
    printf("%c\n" , number);
    printf("%c\n" , NUMBER);
    printf("%d\n", LENGTH);
    

    return 0;
}