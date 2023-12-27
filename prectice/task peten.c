#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 5; i > 0; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
