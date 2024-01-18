#include<stdio.h>
char str[100];
int le=0,i,a=0,n=0,s=0;
char ch()
{
    printf("enter string");
    scanf("%s",&str);
    for (i = 0; i < str[i]; i++)
    {
        le++;
    }
    printf("%d size of str\n",le);
}
int chk()
{
    for (int i = 0; i <le ; i++)
    {
       if (str[i]>=48&&str[i]<=57)
       {
            n++;
       }
       else if (str[i]>=65 && str[i]<=90)
       {
            a++;
       }
       else if (str[i]>=97 &&str[i]<=122)
       {
            a++;
       }
       else
       {
            s++;
       }
       printf("%d\n",str[i]);
    }
    printf("alphabets =%d\n",a);
    printf("digits =%d\n",n);
    printf("special characters =%d",s);

}
int main(int argc, char const *argv[])
{
    ch();
    chk();
    return 0;
}
