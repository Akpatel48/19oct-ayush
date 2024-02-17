//Write a program to find out the max number from given array using function
#include<stdio.h>
int max=0,i,a[50],b;
void mx()
{
    printf("enter array size");
    scanf("%d",&b);
    for (i = 0; i < b; i++)
    {
        printf("enter number");
        scanf("%d",&a[i]);
        if (a[i]>max)
        {
           max=a[i];
        }

    }
}
void pri()
{
    printf("%d",max);
}
int main(int argc, char const *argv[])
{
    mx();
    pri();
    return 0;
}
