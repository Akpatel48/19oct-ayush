#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a=65,j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c",a);
            a++;
            }
        printf("\n");
    }


    return 0;
}
