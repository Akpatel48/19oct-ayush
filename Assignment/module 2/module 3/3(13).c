#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no,a=1,b,c=1,i;
    printf("enter number");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        c=i*c;
        printf("%d ",c);

    }

    return 0;
}