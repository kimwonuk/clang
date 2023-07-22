#include <stdio.h>

int outer = 10;

int main(void) {
    int inner = 3;
    inner++;
    printf("inner: %d\n" , inner);
    inner++;
    printf("outer:%d\n" , outer);




    return 0;
    
}