#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a,b,c;
    while (i<5)
    {
        printf("enter number");
        scanf("%d",&a);
        if (a%2==0)
        {
           int n=0;
           n++;
           b=b+n;
        }
        else
        {
            int m=0;
            m++;
            c=c+m;

        }
    i++;
    }
    printf("even %d",b);
    printf("odd %d",c);

    return 0;
}
