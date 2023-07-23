#include <stdio.h>

int main(void){
    int num =3;
    int* ptr1 = &num;
    int** dptr = &ptr1;
    int* ptr2;

    printf("%p %p\n", ptr1 , dptr);
    printf("%d %d\n", num, **dptr);
    ptr2 = *dptr;
    *ptr2 = 9;

    printf("%d %d\n" , num, **dptr);
}