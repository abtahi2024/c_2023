#include<stdio.h>
#include<string.h>
void fun(char* ar)
{
    printf("%d ",strlen(ar));
//     char n[]="world";
//     return n;
}
int main()
{
    char ar[10]="Hallo";
    fun(ar);
    return 0;
}
