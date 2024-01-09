#include<stdio.h>
int i,j,a=2,no[20][20],b[20][20],c,m1,m2,m3,m4;
//char c;
int arr()
{

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
            printf("enter number");
            scanf("%d",&b[i][j]);

        }

    }
}
int arrpr()
{
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d",no[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}
int m()
{

}
int sw()
{
    printf("enter chose");
    scanf("%D",&c);
    switch (c)
    {
        case 1:
            for (i = 0; i < a; i++)
            {
                for (j = 0; j < a; j++)
                {
                    printf("%d ",no[i][j]+b[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for (i = 0; i < a; i++)
            {
                for (j = 0; j < a; j++)
                {
                    printf("%d ",no[i][j]-b[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
                m1=no[0][0]*b[0][0]+no[0][1]*b[1][0];
    m2=no[0][0]*b[0][1]+no[0][1]*b[1][1];
    m3=no[1][0]*b[0][0]+no[1][1]*b[1][0];
    m4=no[1][0]*b[0][1]+no[1][1]*b[1][1];
            printf("%d",m1);
            printf(" %d\n",m2);
            printf("%d",m3);
            printf(" %d",m4);
    }
}
int main(int argc, char const *argv[])
{
    arr();
    arrpr();
    sw();
    m();
    return 0;
}
