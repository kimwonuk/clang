#include <stdio.h>

int main(void)
{
    printf("I Love C language!\n");
    printf("It is so funny!\n");

    printf("\"I am a boy.\"\n");
    printf("I am a \'boy\'. \n");
    printf("I\tam\ta\tboy.\n");
    printf("I\bam a boy.\n");
    printf("I am a boy\\\?\n");

    char character = 'X';
    int inumber = 92;
    double dnumber = 20.201005;

    printf("%c\n" , character);
    printf("%d\n" , character);
    printf("%d\n" , inumber);
    printf("%x\n" , inumber);
    printf("%o\n" , inumber);
    printf("%f\n" , dnumber);
    printf("%e\n" , dnumber);
    
    char character2='H';
    int num = 548;
    printf("%5c\n" , character2);  
    printf("%-5c\n" , character2);  
    printf("%10c\n" , num);
    printf("%-10c\n" , num);
            
    return 0;
}