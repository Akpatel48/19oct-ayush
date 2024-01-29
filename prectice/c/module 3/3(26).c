#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum,n;
    int i;
    printf("enter number:-");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if((i%2)==1)
       {
            sum+=(i/(i+1));
       }
       else
       {
        sum-=(i/(i+1));
       }

    }
    printf("sum:- %d",sum);

    return 0;
}
