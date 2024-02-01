#include<stdio.h>
int no1,no2,c;
int cal()
{
    a:
    printf("---------------------menu---------------------");
    printf("\n0.exit program\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n\n");
    printf("Enter your choice:");
    scanf("%d",&c);
     while (c==0)
    {
        goto exti;
    }
    if (c<4)
    {
        printf("\nenter first number:");
        scanf("%d",&no1);
        printf("enter second number:");
        scanf("%d",&no2);
        printf("\n");
    }
    switch (c)
    {
    case 1:
        printf("Addition = %d",no1+no2);
        printf("\n");
        goto a;
        break;
    case 2:
        printf("Substaction = %d",no1-no2);
        printf("\n");
        goto a;
        break;
    case 3:
        printf("Multiplicattion = %d",no1*no2);
        printf("\n");
        goto a;
        break;
    case 4:
        printf("Division = %d",no1/no2);
        printf("\n");
        goto a;
        break;
    default:
            printf("\nInvalid choice!!!!");
            printf("\n");
            goto a;
        break;
    }
    exti:
    printf("\n-----------------------------");
}
int main(int argc, char const *argv[])
{

        cal();
    return 0;
}
