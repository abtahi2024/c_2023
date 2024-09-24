#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    // printf("%p\n",&x);
    // printf("%p",ptr);
    *ptr=50;
    // x=50;
    printf("%d",*ptr);
    // printf("%d",x);




    return 0;
}