#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100],array_size,i,sum=0;
    printf("enter size of array");
    scanf("%d",&array_size);
    printf("---------------------------\n");
    for (i = 0; i < array_size; i++)
    {
       printf("enter array values:");
       scanf("%d",&arr[i]);
    }
    for (i = 0; i < array_size; i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of array %d",sum);
    return 0;
}
