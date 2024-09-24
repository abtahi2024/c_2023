#include<stdio.h>
int main()
{
    int n,m;//row=n,col=m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // int r;//row
    // scanf("%d",&r);
    // for(int i=0;i<m;i++)
    // {
    //     printf("%d ",a[r][i]);
    // }
    // printf("\n");
    int c;
    scanf("%d",&c);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i][c]);
    }


    return 0;
}