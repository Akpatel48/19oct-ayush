#include<stdio.h>
int i,j,no[100][100],a;
int arr()
{
    printf("size of array");
    scanf("%d",&a);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("enter number");
            scanf("%d",&no[i][j]);
        }

    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d ",no[i][j]);
        }
        printf("\n");
    }

}
int main(int argc, char const *argv[])
{
    arr();

    return 0;
}

