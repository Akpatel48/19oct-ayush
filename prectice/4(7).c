#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no,r,a;
    printf("etnere number");
    scanf("%d",&no);
    while (no !=0)
    {
        a=no%10;
        r=r*10+a;
        no/=10;
    }
    printf("%d",r);

    return 0;
}
