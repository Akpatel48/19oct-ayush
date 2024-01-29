#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,i;
    printf("enter ani number");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        c=(a*a*a)+c;
        a=a/10;
    }
    printf("%d\n",c);
    if (b==c)
    {
        printf("%d is Armstrong number",b);
    }
    else
    {
        printf("%d is not Armstrong number",b);
    }


    return 0;
}
