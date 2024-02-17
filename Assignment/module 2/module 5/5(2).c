//Write a program in C to separate individual characters from a string
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[100];
    printf("enter string:-");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c\n",str[i]);
    }

    return 0;
}
