#include<stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("enter Character:");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("Character Is Vowel");
    }
    else
    printf("Character Is not Vowel ");
    return 0;
}
