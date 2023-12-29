#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i,n,max=0;
    printf("enter sizxe of array");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
        if (a[i]>max)
        {
            max=a[i];
        }

    }
    printf("max number %d",max);

    return 0;
}
