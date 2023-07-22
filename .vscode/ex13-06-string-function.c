#include <stdio.h>

int main(void){
    char str1[50] = "Michael";
    char str2[50] = "Michael";

    strcat(str1, "Bolton");
    puts(str1);

    strncat(str2, "Jackson Five", 7);
    puts(str2);


    printf("비교결과: %d\n",  strcmp(str1,str2));

    printf("비교 결과: %d\n" , strncmp(str1, str2, 7));
}