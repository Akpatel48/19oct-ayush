#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[100],s[10],st[100];
    printf("enter string:-");
    gets(str);
    printf("enter remove alfabt:-");
    scanf("%c",&s);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]!=s)
        {
            st[i]=st[i]+str[i];
        }
    }
    puts(st);

    return 0;
}