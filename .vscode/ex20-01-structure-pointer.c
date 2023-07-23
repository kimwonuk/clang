#include <stdio.h>

typedef struct
{ 
    char name[30];
    int age;

}Person;

int main(void)
{
    Person boy =  {"손흥민" , 32};
    Person* ptr = &boy;

    printf("%s (%d)\n" , (*ptr).name, (*ptr).age);
}