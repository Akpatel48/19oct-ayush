#include<stdio.h>
int main(int argc, char const *argv[])
{
    int salary;
    printf("enter monthli salary:-");
    scanf("%d",&salary);
    salary*=12;
    printf("Annual salary %d",salary);
    return 0;
}
