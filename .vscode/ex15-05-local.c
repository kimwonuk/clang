#include <stdio.h>

int localFunc(int num)
{
    int result = 0;
    return result +num;
}
int num(void)
{
    int num = 5;
    int result = localFunc(num);

    
}