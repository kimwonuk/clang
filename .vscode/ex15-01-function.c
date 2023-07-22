#include <stdio.h>

 int add(int a, int b) {
    printf("add함수 실행!\n");
    return a+b;

 }
 int main(void){
    int result;

    result = add(3,5);

    printf("함수가 반환한 값: %d\n" , result);
    return 0;
 }