#include <stdio.h>

number = 3;

void printNumber(void)
{
    printf("전역변수 number는 %d을 저장하고 있다.\n" , number);
}
int main(void){
    int number = 3;
    printf("지역변수 number는 %d을 저장하고 있다\n" , number);
    return 0;
}