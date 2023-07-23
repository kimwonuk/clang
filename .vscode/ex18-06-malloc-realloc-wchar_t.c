#include <stdio.h>
#include <stdlib.h>

#define INITIAL_BUFFER_SIZE 1

int main(void) 
{
    printf("sizeof: %d\n" , sizeof(wchar_t));

    wchar_t c;
    int len = 0;
    int buffer_size = INITIAL_BUFFER_SIZE;
    wchar_t* str = (wchar_t*)malloc(buffer_size * sizeof(wchar_t));

    if (str == NULL)
    {
        wprintf(L"Memory)
    }
}