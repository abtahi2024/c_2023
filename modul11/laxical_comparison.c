#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int v=strcmp(a,b);
    if(v<0)
    {
        printf("A is smller\n");
    }
    else if(v>0)
    {
        printf("B is smller\n");
    }
    else
    {
        printf("same\n");
    }
    // int i=0;
    // while (1)
    // {
    //     if(a[i]=='\0' && b[i]=='\0')
    //     {
    //         printf("same\n");
    //         break;
    //     }
    //     else if(a[i]=='\0')
    //     {
    //         printf("A is smller\n");
    //         break;
    //     }
    //     else if(b[i]=='\0')
    //     {
    //         printf("B is smller\n");
    //         break;
    //     }
    //     else if(a[i]==b[i])
    //     {
    //         i++;
    //     }
    //     else if(a[i]<b[i])
    //     {
    //         printf("A is smller\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("B is smller\n");
    //         break;
    //     }

   // }

    


    return 0;
}