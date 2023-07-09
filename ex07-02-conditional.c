#include <stdio.h>

int main(void)
{
    int num = 1;
    switch (num)
    {
    case 0:
        printf("0입니다");
        break;
    
    case 1:
        printf("1입니다\n");
        break;
    case 2:
        printf("2입니다\n");
        break;
    case 3:
        printf("3입니다\n");
        break;
    default:
        printf("0~3 이 아닙니다\n");
        break;
    
    return 0;
    }
}