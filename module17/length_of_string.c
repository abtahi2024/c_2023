// #include<stdio.h>
// int fun(char a[],int i)
// {
//     if(a[i]=='\0')return 0;
//     int l=fun(a,i+1);
//     return l+1;
// }
// int main()
// {
//     char a[10]="hello";
//     int lgt=fun(a,0);
//     printf("%d",lgt);

//     return 0;
// }

#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0')return 0;
    int l=fun(a,i+1);
    return l+1;


}
int main()
{
    char a[10]="hello";
    int lenght=fun(a,0);
    printf("%d",lenght);
    return 0;
}