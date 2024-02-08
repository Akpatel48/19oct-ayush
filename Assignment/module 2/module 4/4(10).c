#include<stdio.h>
int no,a,b,p;
int enter()
{
    printf("enter number");
    scanf("%d",&no);
}

pl()
{
    p=no;
    for (no; no!=0;)
    {
        a=no%10;
        b=b*10+a;
        no=no/10;
    }

    if (p==b)
    {
        printf("%d is Palindrome",p);
    }
    else
    {
        printf("%d is not Palindrome",p);
    }


}
int main(int argc, char const *argv[])
{
    enter();
    pl();
    return 0;
}
