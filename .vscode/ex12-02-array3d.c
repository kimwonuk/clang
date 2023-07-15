#include <stdio.h>

int main(void)
{
    
    short sarr[2][3][4];
    int iarr[2][3][4];

    printf("size of sarr: %d\n" , sizeof(sarr));
    printf("size of iarr: %d\n" , sizeof(iarr));

    int arr[2][3][4] ={
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {21,22,23,24},
            {25,26,27,28},
            {29,30,31,32}
        }
    };
    int a,i,j;
    for(i=0 ; i<2 ; i++)
    {
        for(j=0; j<3; j++)
        {
            for(a=0; a<4 ; a++)
            {
                printf("%d" , arr[i][j][a]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

return 0;
}