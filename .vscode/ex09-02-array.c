#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char greet[] = "Hello, Guys!";
    printf("1차원 배열 greet 의 길이는: %d\n" , sizeof(greet));

    char mind[30] = "I Love Proramming!";
    printf("%s\n" , mind);

    mind[7] = '\0';
    printf("%s\n" , mind);

    printf("sizeof: %d\n" , sizeof(mind));

    char str[50];
    printf("문자열을 입력하세요: ");
    scanf("%s" , str);
    printf("입력된 문자열: %s\n" , str); 
    return 0;
}