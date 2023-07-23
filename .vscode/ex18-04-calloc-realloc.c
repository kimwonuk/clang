#include<stdio.h>
int main(void)
{
    int* ptr;
    int count = 0;
    int maxSize = 3;
    int num;
    int i;

    ptr = (int*)calloc(maxSize,sizeof(int));
    while (1)
    {
        printf("정수를 입력하세요(-1입력시 종료): ");
        scanf("%d" , &num);
        if(num == -1)
        {
            break;
        }
        if (count == maxSize)
        {
            maxSize += maxSize
            ptr = (int*)calloc(ptr,maxSize * sizeof(int));


        }
    ptr[count++] = num;
    }