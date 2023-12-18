#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    (a<b)?(printf("%d is min",a)):(b<c?(printf("%d is min",b)):(printf("%d is max",c)));
    return 0;
}
