#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    /*
    char ch[30];
    gets(ch);
    puts(ch);
    printf("이문자열은 다음줄에서 출력됩니다.\n");
    */

   char ch[30];
   fgets(ch, 30, stdin);

   fputc(ch, stdout);

   printf("이문자열은 다음줄에서 출력됩니다.\n");

    return 0;
}