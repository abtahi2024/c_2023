#include<stdio.h>
// void fun(int* ar,int n)
void fun(char* ar)
{
    ar[0]='P';
}
int main()
{
    // int ar[5]={10,20,30,40,50};
    char ar[6]={"hallo"};
    fun(ar);
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",ar[i]);
    // }
    printf("%s",ar);
    return 0;
}