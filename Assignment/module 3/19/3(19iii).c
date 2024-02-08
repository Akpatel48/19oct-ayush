#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a=1;
    int i,j;
    for (i = 0; i <=5; i++)
    {
        for (j = 0; j < i; j++)
        {

            printf("%d ",a);
            a++;
        }
        printf("\n");

    }

    return 0;
}
