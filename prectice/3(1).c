#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    if (a==b)
    {
        printf("number is equal");
    }
    else
    {
        printf("number is not equal");
    }
    return 0;
}
