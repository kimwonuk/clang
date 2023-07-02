#include <stdio.h>

int main(void) 
{
    float err_num = 0;
    for (int i = 0; i <100; i++)
    {
        err_num += 0.1;
        printf("%d번째: %.20f\n", i , err_num);
    }

    return 0;
}