#include <stdio.h>

int main(void)
{
    int num = 3;
    int* ptr = &num;

    printf("%p\n" , ptr);
    printf("%d\n" , *ptr);

    ptr++;
    printf("%p\n" , ptr);
    printf("%d\n" , *ptr);

    short sarr[3] ={1,2,3};
    int iarr[3] = {10,20,30};

    printf("%d %d %d\n" , sarr[0] , sarr[1] , sarr[2]);
    printf("%d %d %d\n" , iarr[0] , iarr[1] , iarr[2]);

    printf("%d %d %d\n" , *sarr , *(sarr +1) , *(sarr+2));
    printf("%d %d %d\n" , *iarr , (*iarr+1) , (*iarr+2));

    printf("%p %p %p", &sarr[0] , &sarr[1] , &sarr[2]);
    printf("%p %p %p", &iarr[0] , &iarr[1] , &iarr[2]);
    
    

    return 0;
}