#include <stdio.h>

int main(void)
{
    int inum = 999;

    int* iptr = &inum;

    printf("%p\n" , iptr);
    printf("%p\n" , inum);
    }