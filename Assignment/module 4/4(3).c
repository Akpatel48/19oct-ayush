#include<stdio.h>
void rev(char s[],int i)
{

    if (s[i]='\0')
    {
        return;
        rev(s,i+1);
        printf("%c",s[i]);
    }

}
int main(int argc, char const *argv[])
{
    char str[100];
    printf("enter string:-");
    gets(str);
    printf("string reverse is ");
    rev(str,0);
    return 0;
}
