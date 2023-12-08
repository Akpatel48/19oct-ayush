#include<stdio.h>
int main(int argc, char const *argv[])
{
    int day,mounth;
    printf("enter day");
    scanf("%d",&day);
    mounth=day/30;
    printf("day into mounth %d",mounth);
    return 0;
}
