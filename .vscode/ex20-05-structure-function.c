#include <stdio.h>

typedef struct 
{
    int s_id;
    int age;
}Student;

Student setStudent(int s_id, int age)
{
    Student s= {s_id , age};
    return s;
}

void printStudent(Student)
{
    printf("학번: %d , 나이: %d\n" , 30309,16);

}

int main(void)
{
    Student s = setStudent(20230723 , 20);
    printStudent(s);

    return 0;
}
