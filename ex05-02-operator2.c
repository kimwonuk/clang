#include <stdio.h>

int main(void) 
{
    printf("논리 연산자\n");
    int num1 = 20, num2 = 10;
    int result;
    result = 1 && 1;
    printf("1) result: %d\n" , result);

    result = num1 == 20 && num2 ==10;
    printf("2) result: %d\n" , result);

    printf("시프트 연산자");
    int x,y;
    x=3;
    y=x<<2;
    printf("%d << 2 = %d\n" , x , y);

    return 0;
}