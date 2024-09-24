#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        // if(i%2==0)
        scanf("%d", &ara[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        // if(i%2==0)
        printf("%d\n", ara[i]);
    }
    return 0;

}