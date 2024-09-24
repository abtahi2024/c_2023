#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n+1];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int pos,val;
    scanf("%d %d",&pos,&val);
    for(int i=n;i>=pos+1;i--)
    {
        ara[i]=ara[i-1];
    }
    ara[pos]=val;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
   
}