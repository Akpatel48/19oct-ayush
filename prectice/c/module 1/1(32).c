#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum,no1,no2;
    printf("enter fist number");
    scanf("%d",&no1);
    printf("enter second nimber");
    scanf("%d",&no2);
    sum=no1+no2;
    printf("sum =%d\n",sum);
    printf("sum size =%d",sizeof(sum));
    return 0;
}
