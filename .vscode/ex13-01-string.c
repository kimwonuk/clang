#include <stdio.h>

int main(void)
{
    char good[] = "Good!";
    char* bad = "Bad!";

    printf("1-1: %s\n" , good);    
    printf("1-2: %s\n" , bad);   
    printf("1-3: %p %p\n" , good , bad);   


    //good = "New Good";
    good[0] = 'H';


    //bad[0] = 'S';
    bad = "New Bad";

    printf("2-1: %s\n" , good);
    printf("2-2: %s\n" , bad);

    return 0;
}