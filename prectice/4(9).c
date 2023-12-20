#include<stdio.h>
int main(int argc, char const *argv[])
{
    int s,s1,a;
    printf("enter number");
    scanf("%d",&a);
    while (a!=0)
    {
        s=a%10;
        s1=s+s1;
        a=a/10;
    }
    printf("sum= %d",s1);

    return 0;

}
