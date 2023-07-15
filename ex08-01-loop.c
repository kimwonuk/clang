#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)


{
    /*int num = 0;
    while (num < 3)
    {
        printf("num is  %d now" , num);
        num++;

        return 0;
    }
    printf("End while문 - num is %d\n", num);
    return 0;*/

    int num2 = 0;
    while (num2 != -1)
    {
        printf("숫자를 입력하세요(-1 입력시 종료): ");
        scanf("%d", &num2);

        if(num2 == -1)
        {
            printf("종료 합니다");
        }
        else
            printf("%d", num2 , "(을)를 입력하셨네요\n");
    }   

}
