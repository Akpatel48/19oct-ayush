#include<stdio.h>
int main()
{
    int pi=3.14,r,a;
    printf("enter radius");
    scanf("%d",&r);
    a=pi*r*r;
    printf("area of cirecl=%d\n",a);
    a=2*r;
    printf("Diameter of cirecl %d",a);
    return 0;
}
