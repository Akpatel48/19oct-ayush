#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    if ((year%4)==0)
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not leap year",year);
    }
    return 0;
}
