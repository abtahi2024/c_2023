#include<stdio.h>
int main()
//output;
// {
//     int ara[3];
//     ara[0]=100;
//     ara[1]=200;
//     ara[2]=300;
//     for(int i=1;i<=5;i++)
//     printf("%d %d %d\n", ara[0],ara[1],ara[2]);
//     return 0;
// }


//input;
{
    // int ara[5];               
    // for(int i=0;i<5;i++)
    // {
    //     scanf("%d",&ara[i]);
    // }
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d\n",ara[i]);
    // }

       int n;
       scanf("%d",&n);
       int ara[n];
       for(int i=0;i<n;i++)
       {
        scanf("%d",&ara[i]);
       }  
       for(int i=0;i<n;i++)
       {
        printf("%d\n",ara[i]);
       }  
     
    
    return 0;
}