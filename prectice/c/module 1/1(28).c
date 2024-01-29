#include<stdio.h>
int main(int argc, char const *argv[])
{
    int day,mounth,year;
    printf("enter year");
    scanf("%d",&year);
    day=year*365;
    mounth=year*12;
    printf("year to day %d\n",day);
    printf("year to mount %d",mounth);
    return 0;
}
