#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int cnt[26]={0};
    for(int i=0;i<strlen(a);i++)
    {
        int val=a[i]-'a';
        cnt[val]++;
    }
    for(int i=0;i<strlen(a);i++)
    {
        int val=a[i]-97;
        if(cnt[val]!=0)
        {
        printf("%c - %d\n",val+'a',cnt[val]);
        }
        cnt[val]=0;
    }

    // {
    //     if(cnt[i]!=0)
    //     {
    //     printf("%c - %d\n",i+'a',cnt[i]);
    //     }
    // }


    return 0;
    


}