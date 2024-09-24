// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char e[1001],f[1001];
//     scanf("%s",e);
//     strcpy(f,e);
//     int i=0,j=strlen(f)-1;
//     while (i<j)
//     // for(int i=0;i<e;i++)
//     {
//         // for(int j=0;j<strlen(f)-1;j++)
//     {
//         char tmp=f[i];
//         f[i]=f[j];
//         f[j]=tmp;
//         i++;
//         j--;
//     }
//     }
//     if(strcmp(e,f)==0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
    
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int i=0,j=strlen(a)-1;
    int flag=1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag=0;
            // break;
        }
        i++;
        j--;
    }
    if(flag==0)
     {
        printf("NO\n");
    }
     else
    {
        printf("YES\n");
        
    }

    return 0;
}









// #include <stdio.h>
// #include <string.h>

// int main() {
//     char S[1001];
//     scanf("%s", S);
//     int length = strlen(S);
//     int isPalindrome = 1;  // Assume it's a palindrome by default

//     for (int i = 0; i < length / 2; i++) {
//         if (S[i] != S[length - 1 - i]) {
//             isPalindrome = 0;  // Not a palindrome
//             break;
//         }
//     }

//     if (isPalindrome) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }
