#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter number");
    scanf("%d%d",&a,&b);
    a+=b;
    a-=b;
    printf("sum=%d\n",a);
    a-=b;
    printf("sub=%d\n",a);
    a*=b;
    printf("mul=%d\n",a);
    a/=b;
    printf("div=%d\n",a);
    a%=b;
    printf("modulo=%d",a);

    return 0;
}
