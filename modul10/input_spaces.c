#include<stdio.h>
#include<string.h>
int main()
{
    char a[6];
    //gets(a);
    fgets(a,7,stdin);

    printf("%s",a);
    return 0;

}