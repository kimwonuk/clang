#include <stdio.h>
#

int guid(void) {
    printf("inputNumber 함수를 통해 정수를 이볅할 수 있습니다\n");
    printf("또한 printNumber 함수를 통해 입력한 정수를 출력할 수도 있습니다\n");
}
void printNumber(int num)
{
    print("당신이  입력한정수는 %d입니다\n" , num);
}

int inputNumber(void)
{
    int num;
    print("정수를 입력해 주세여");
    scanf("%d" , &num);
}

int main(void) {
    guide();

    return 0;
}