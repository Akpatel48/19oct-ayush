#include<stdio.h>
int main()
{
    int a,day,week,month,year;
    printf("enter day");
    scanf("%d",&a);
    week=a/7;
    printf("day %d to week %d\n",a,week);
    month=a/30;
    printf("day %d to month%d\n",a,month);
    year=a/365;
    printf("day %d to year%d\n  ",a,year);
    return 0;
}
