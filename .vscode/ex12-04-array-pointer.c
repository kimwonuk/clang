#include <stdio.h>

int main(void)
{
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int(*arrptr)[3] = arr;

    int i,j;
    for(i=0; i<2; i++)
    {
        for(f=0 ; f<3 ; j++)
        {
            printf("%d", arrptr[i][j]);
        }
        printf("\n");
    }
}