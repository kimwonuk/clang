#include <stdio.h>

int main(void) 
{
    int i,j;
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    printf("%d\n", arr[0][0]);
    printf("%d\n", arr[1][2]);

    for(i = 0; i<2; i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d " , arr[i][j]);
            }
            printf("\n");
        }

    for(i=0;j<3;j++)
    {
        for(j= 0; j<3;j++)
        {
            arr[i][j] = 10;
        }
    }


}