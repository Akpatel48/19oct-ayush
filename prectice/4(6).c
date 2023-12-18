#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,c,a=0,b=1,d;
    printf("enter Fibonacci series no");
    scanf("%d",&d);
    for (i = 0; i <d ; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("Fibonacci series %d\n",c);
    }


    return 0;
}
