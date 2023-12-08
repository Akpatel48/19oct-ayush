#include<stdio.h>
int main(int argc, char const *argv[])
{
    int wl,hw,hl,a;
    printf("enter wl & hw & hw");
    scanf("%d%d%d",&wl,&hw,&hl);
    a=2*(wl+hl+hw);
    printf("rectangular prism=%d",a);
    return 0;
}
