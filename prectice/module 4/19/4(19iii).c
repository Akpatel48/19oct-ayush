#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,a=1;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            if(a<15)
                printf("%d ",a);
            a++;
        }
        printf("\n");
    }


    return 0;
}
