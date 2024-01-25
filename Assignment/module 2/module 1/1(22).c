#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,r,t,a;
    printf("enter amount");
    scanf("%d",&p);
    printf("enter interest rate");
    scanf("%d",&r);
    printf("enter time in year");
    scanf("%d",&t);
    a=p*(1 + r/100)*t;
    printf("%d",a);
    return 0;
}
