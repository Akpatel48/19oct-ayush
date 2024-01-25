#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=0,sum=0,n;
    printf("enter Natural for sum:-");
    scanf("%d",&n);
    while (i !=n+1)
    {
        sum=i+sum;
        i++;
    }
    printf("sum =%d",sum);


    return 0;
}
