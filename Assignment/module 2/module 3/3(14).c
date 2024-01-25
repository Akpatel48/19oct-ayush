#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a1,a2,a3,a4,a5,i,s1,s2,s3,s4,s5;
    printf("enter number");
    scanf("%d",&a1);
    printf("enter number");
    scanf("%d",&a2);
    printf("enter number");
    scanf("%d",&a3);
    printf("enter number");
    scanf("%d",&a4);
    printf("enter number");
    scanf("%d",&a5);
    for (i = 1; i <= a1; i++)
    {
        s1=s1*i;

    }
    for (i = 1; i <= a2; i++)
    {
        s2=s2*i;

    }
    for (i = 1; i <= a3; i++)
    {
        s3=s3*i;

    }
    for (i = 1; i <= a4; i++)
    {
        s4=s4*i;

    }
    for (i = 1; i <= a5; i++)
    {
        s5=s5*i;

    }
    printf("factorial number %d\n",s1);
    printf("factorial number %d\n",s2);
    printf("factorial number %d\n",s3);
    printf("factorial number %d\n",s4);
    printf("factorial number %d\n",s5);
    return 0;
}
