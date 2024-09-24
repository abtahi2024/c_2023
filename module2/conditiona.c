#include<stdio.h>
int main()
{
int tk = 100;
scanf("%d", &tk);
if(tk >= 100)
{
    printf("Eat burger");
}
else if(tk >= 50)
{
    printf("Eat fuska");
}
else if(tk >= 20)
{
    printf("Eat ice cream ");
}
else 
{
    printf("won't eat");
}

return 0;

}