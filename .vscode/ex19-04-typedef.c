#include <stdio.h>

typedef int INT;
typedef int* PINT;
typedef unsigned int UINT;

int main(void)
{
    typedef char CHAR;
    typedef char* STR;

    INT num = 3;
    PINT ptr = &num;
    UINT nuum = 5;

    CHAR ch = 'c';
    STR str = 5;

    printf("%d %d %d\n" , num, *ptr, nuum);
    printf("%c %s\n" , ch, str);


    return 0;
}