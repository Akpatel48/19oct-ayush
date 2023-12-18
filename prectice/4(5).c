#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a;
    printf("enter number");
    scanf("%d",&a);
    for (i = 1; i < a; i++)
    {
        a*=i;

    }
    printf("factorial number %d",a);

    return 0;
}
