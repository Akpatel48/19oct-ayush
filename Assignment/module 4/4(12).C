
#include<stdio.h>
int i;
char c[20],a;
void name()
{
    for (i = 0; i < 5; i++)
    {
        printf("enter students name:-");
        scanf("%s",&c[a]);
    }
    printf("\n%s",c[a]);
}
void pri()
{
    printf("\n%s",c[a]);

}
int main(int argc, char const *argv[])
{
    name();
    pri();
    return 0;
}
