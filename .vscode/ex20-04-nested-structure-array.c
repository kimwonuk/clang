#include <stdio.h>

typedef struct 
{
    char title[100];
    int published;
}Book;

typedef struct 
{
    Book book[3];
}bag;

int main(void)
{
    Bag myBag = {
        {
            {"지금하지 않으면 언제하겠는가" , 2018},
            {"타이탄의 도구들" , 2017},
            {"12가지 인생의 법칙" , 2018}
        }
    };
    for (int i = 0; i <3; i++)
    {
        printf("책 제목: %s \n 출가년: %d년\n",
        myBag.book[i].title, myBag.book[i].published);
    }
}

