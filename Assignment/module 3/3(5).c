#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a;
    long long int s=1;
    printf("enter number");
    scanf("%d",&a);
    for (i = 1; i <= a; i++)
    {
        s=s*i;

    }
    printf("factorial number %lld",s);

    return 0;
}
