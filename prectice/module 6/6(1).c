#include<stdio.h>
char str[20];
int le=0,i;
int len()
{
    printf("enter string:-");
    scanf("%s",&str);
    for (i = 0; i < str[i]; i++)
    {
        le++;
    }
    printf("%d size of string",le);
}
int main(int argc, char const *argv[])
{
    len();
    return 0;
}
