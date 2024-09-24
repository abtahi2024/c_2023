#include<stdio.h>
void fun(int n)
{
    if(n==0) return;
    int x=n%10;
    fun(n/10);
    printf("%d ",x);
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int n;
        scanf("%d",&n);
        fun(n);
        if(n==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>

// void fun(int n)
// {
//     if (n == 0)
    
//         return;
//     int x = n % 10;
//     fun(n / 10);
//     printf("%d ", x);
// }

// int main()
// {
//     int T;
//     scanf("%d", &T);
//     for (int i = 0; i < T; i++)
//     {
//         int n;
//         scanf("%d", &n);
//         fun(n);
//         printf("\n");
//     }
//     return 0;
// }
