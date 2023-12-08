#include<stdio.h>
int main(int argc, char const *argv[])
{
    int day,year;
    printf("enter year");
    scanf("%d",&year);
    day=year*365;
    printf("day into day %d\n",day);
    year=day/365;
    printf("day to year: %d",year);
    return 0;
}
