#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int i=0,j=n-1;
    while(i,j)
    {
        int tmp=ara[i];
        ara[i]=ara[j];
        ara[j]=tmp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
    
}