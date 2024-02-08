#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a,b=0,c=0;
    while (i<5)
    {
        printf("enter number");
        scanf("%d",&a);
        if (a%2==0)
        {
           b++;
        }
        else
        {
            c++;
        }
    i++;
    }
    printf("even %d",b);
    printf("odd %d",c);

    return 0;
}
