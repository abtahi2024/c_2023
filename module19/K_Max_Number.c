#include<stdio.h>
#include<limits.h>
int fun(int a[],int n,int i)
{
    if(i==n)return INT_MIN;
   int ans=fun(a,n,i+1);
   if(a[i]>ans)
   {
    return a[i];
   }
   else
   {
    return ans;
   }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=fun(a,n,0);
    printf("%d\n",ans);
    return 0;

}