#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a=65;
    int i,j;
    for (i = 0; i <=5; i++)
    {
        for (j = 0; j < i; j++)
        {

            printf("%c",a);
            a++;
        }
        printf("\n");

    }

    return 0;
}
