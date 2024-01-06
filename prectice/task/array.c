#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n[100],i,a;
    printf("enter size of array");
    scanf("%d",&a);
    for (i = 0; i < a; i++)
    {
        printf("enter values[%d]",i);
        scanf("%d",&n[i]);
    }
    for (i = 0; i < a; i++)
    {
        printf("array [%d]=%d\n",i,n[i]);
    }


    return 0;
}
