#include <stdio.h>
#include <stdlib.h>
#define INITAL_BUFFER_SIZE 1

int main(void){
    int c;\
    int len = 0;
    int buffer_size = INITAL_BUFFER_SIZE;
    char* str = (char*)malloc(buffer_size);

    if(str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string: ");

    while ((c=getchar()) != '\n' && c != EOF)
    {
        if(len == buffer_size)
        {
            buffer_size *= 2;
            str = realloc(str,buffer_size);
            if(str==NULL)
            {
                printf("Memory allocation failed\n");
            }
        }
    }

    str[len] = '\0';
    printf("you entered %s\n" , str);
    free(str);
    

    return 0;
}