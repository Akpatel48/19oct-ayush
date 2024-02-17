//WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)
#include<stdio.h>
int n1,n2,m;
char s;
void ev()
{
    printf("enter two values:-");
    scanf("%d%d",&n1,&n2);
    printf("chose +,-,*,/:-");
    scanf("%s",&s);
}
void cal()
{
    switch (s)
    {
    case '+':
        m=n1+n2;
        break;
    case '-':
        m=n1-n2;
        break;
    case '*':
        m=n1*n2;
        break;
    case '/':
        m=n1/n2;
    }
}
void pri()
{
    printf("%d%c%d=%d",n1,s,n2,m);
}
int main(int argc, char const *argv[])
{
    ev();
    cal();
    pri();
    return 0;
}
