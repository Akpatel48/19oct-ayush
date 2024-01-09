#include<stdio.h>
int no[100],a,i;
int arr()
{
    printf("enter size of array:");
    scanf("%d",&a);
    for (i = 0; i < a; i++)
    {
        printf("enter number:");
        scanf("%d",&no[i]);
    }
}
int eo()
{
    printf("even no:");
    for (i = 0; i < a; i++)
    {
        if (no[i]%2==0)
        {
            printf("%d ",no[i]);
        }
    }
    printf("\n");
    printf("odd:");
    for (i = 0; i < a; i++)
    {
        if (no[i]%2!=0)
        {
            printf("%d ",no[i]);
        }
    }
}
int main(int argc, char const *argv[])
{
    arr();
    eo();
    return 0;
}
