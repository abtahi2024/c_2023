#include<stdio.h>
int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
//    int s=sum(10,20);
//    int a=sum(100,200);

   printf("%d\n",sum(10,20));
   printf("%d",sum(100,200));
   return 0; 
}