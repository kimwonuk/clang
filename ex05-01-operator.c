#include <stdio.h>

int main(void)
{
    printf("산술연산자\n");
    int num1 = 7, num2 =3;
    printf("%d + %d = %d\n", num1 ,num2 , num1 + num2);
    printf("%d - %d = %d\n", num1 ,num2 , num1 - num2);
    printf("%d * %d = %d\n", num1 ,num2 , num1 * num2);
    printf("%d / %d = %d\n", num1 ,num2 , num1 / num2);
    printf("%d %% %d = %d\n", num1 ,num2 , num1 % num2);


    printf("대입연산다 \n");
    int num3 = 3, num4 = 4;
    num3 += 3;
    num4 *= 4;
    printf("num3 += 3 의 결과: %d\n", num3);
    printf("num3 *= 4 의 결과: %d\n", num4);

    printf("비교연산자 \n");
    int a = 10, b = 11;
    printf("a==b: %d\n", a == b);
    printf("a>b: %d\n", a > b);
    printf("a<b: %d\n", a < b);
    printf("a>=b: %d\n", a >= b);
    printf("a<=b: %d\n", a <= b); 
    printf("a!=b: %d\n", a != b); 


    return 0;
}