#include<stdio.h>
int no1,no2,c;
int enter()
{
    printf("---------------------menu---------------------");
    printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n\n");
    printf("Enter your choice:");
    scanf("%d",&c);
}
int cal()
{
    printf("\nenter first number:");
    scanf("%d",&no1);
    printf("enter second number:");
    scanf("%d",&no2);
    printf("\n");
    switch (c)
    {
        case 1:
            printf("Addition = %d",no1+no2);
            printf("\n");
            break;
        case 2:
            printf("Substaction = %d",no1-no2);
            printf("\n");
            break;
        case 3:
            printf("Multiplicattion = %d",no1*no2);
            printf("\n");
            break;
        case 4:
            printf("Division = %d",no1/no2);
            printf("\n");
            break;
    }
}
int main(int argc, char const *argv[])
{
    do
    {
        enter();
            if(c==0 || c>=5)
            {
                printf("\nInvalid choice!!!!");
                printf("\n-----------------------------");
                goto exti;
            }
        cal();
    } while (c!=0);
    exti:
    return 0;
}
