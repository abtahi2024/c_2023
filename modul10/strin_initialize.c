#include<stdio.h>
int main()
{
    // char a[6]={'a','b','c','d','e'};
    char a[6]="ABCDE"; //null-'\0'
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    return 0;
}