#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value");
    scanf("%d%d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("after swaping %d\n%d",a,b);
    return 0;
}
