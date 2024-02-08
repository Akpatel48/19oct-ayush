#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no,a=1,b=2,i;
    printf("enter number");
    scanf("%d",&no);
    printf("%d %d ",a,b);
    for(i = 3; i < no; i++)
    {
        if ((i%2)==1)
        {
            a=a*3;
            printf("%d ",a);
        }
        else
        {
            b=b*3;
            printf("%d ",b);
        }

    }

    return 0;
}
