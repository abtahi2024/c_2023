#include<stdio.h>
void world()
{
    printf("world\n");
    // hello();
    printf("End\n");
}
void hello()
{
    printf("hello\n");
    world();
    printf("end\n");
}
int main()
{
    // world();
    // hello();
    printf("main\n");
    hello();
    printf("end\n");

    return 0;
}


// #include <stdio.h>
// void gello()
// {
//     printf("Gello ");
// }
// void hello()
// {
//     gello();
//     printf("Hello ");
// }
// int main()
// {
//     printf("Main ");
//     hello();
// }