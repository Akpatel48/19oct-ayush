#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a,t;
    printf("enter table no");
    scanf("%d",&a);
    for (i = 1; i <= 10; i++)
    {
        t=a*i;
        printf("%d*%d=%d\n",a,i,t);
    }

    return 0;
}
