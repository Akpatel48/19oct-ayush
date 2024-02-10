#include<stdio.h>
int i;
char c[100];
void name()
{
    for (i = 0; i < 5; i++)
    {
        printf("\nenter students name:-");
        gets(c);
        printf("students name:-");
        puts(c);
    }
}
int main(int argc, char const *argv[])
{
    name();
    return 0;
}
