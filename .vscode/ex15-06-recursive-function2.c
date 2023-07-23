#include <stdio.h>


int sayHello(int count)
{
    printf("Hello\n");

    if(count != 3){
        sayHello(count++);
    }
}

int main(void)
{
    sayHello(co);
    return 0;
}