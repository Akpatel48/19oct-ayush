#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter number");
    scanf("%d",&a);
    b=a%10;
    while (a>=10)
    {
        a=a/10;
    }
    a=a+b;
    printf("sum=%d",a);

    return 0;
}
