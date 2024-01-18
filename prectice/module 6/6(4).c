#include<stdio.h>
char str[100];
int i,wo=1;
char word()
{
    printf("enter string:-");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i]==32)
        {
           wo++;
        }
    }
    printf("%d",wo);

}
int main(int argc, char const *argv[])
{
    word();
    return 0;
}
