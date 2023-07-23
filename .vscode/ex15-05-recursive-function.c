#include <stdio.h>

void sayHello()
{
    printf("Hello!\n");
    sayHello();

}

int main(void)
{
    sayHello();
    return 0;
}