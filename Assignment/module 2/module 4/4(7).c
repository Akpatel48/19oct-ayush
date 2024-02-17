//WAP Find out length of string without using inbuilt function
#include<stdio.h>
int len;
char str[100];
int le()
{
    printf("enter string");
    scanf("%s",str);
    for (int i = 0; str[i]!=0; i++)
    {
        len++;
    }
    printf("%d",len);

}
int main(int argc, char const *argv[])
{
    le();
    return 0;
}
