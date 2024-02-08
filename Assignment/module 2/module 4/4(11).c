#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,arr[100],size;
    printf("enter size of array");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("enter array values");
        scanf("%d",&arr[i]);
    }
    for (i = size-1; i >=0; i--)
    {
        printf("revers oder arry [%d]%d\n",i,arr[i]);
    }


    return 0;
}
