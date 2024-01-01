#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,r,m=0;
    printf("enter number");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        if (r>m)
        {
            m=r;
        }
        n=n/10;

    }
    printf("%d is max",m);

    return 0;
}
