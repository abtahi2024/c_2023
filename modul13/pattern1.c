#include<stdio.h>
int main()
{
    int n,k=n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
            k--;

        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int k = n; // Start k from n and decrement it in each iteration.

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= k; j++) {
//             printf("*");
//         }
//         k--; // Decrement k to reduce the number of asterisks in each row.
//         printf("\n");
//     }

//     return 0;
// }
