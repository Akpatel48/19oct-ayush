#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    a=a+b+c;
    if (23<a)
    {
        printf("pass");
    }
    else
    {
        printf("file");

    }

    return 0;
}
