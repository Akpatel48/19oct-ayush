#include<stdio.h>
int main(int argc, char const *argv[])
{
    int salary;
    float ip,pp;
    printf("enter salary");
    scanf("%d",&salary);
    printf("enter insurance premium percentage");
    scanf("%f",&pp);
    ip=salary*pp;
    printf("insurance premium salary=%f",ip);
    return 0;
}
