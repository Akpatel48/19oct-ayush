#include<stdio.h>
int main(int argc, char const *argv[])
{
    int g,s,e,m,sum;
    printf("enter out of 100 gujrati marks");
    scanf("%d",&g);
    printf("enter out of 100 since marks");
    scanf("%d",&s);
    printf("enter out of 100 englich marks");
    scanf("%d",&e);
    printf("enter out of 100 math marks");
    scanf("%d",&m);
    sum=g+s+m+e;
    printf("%d\n",sum);
    if (sum<400 && sum>300 && g>25 && s>25 && e>25 &&m>25 )
    {
        printf("fast class");
    }
    else if (sum<299 && sum>250 && g>25 && s>25 && e>25 &&m>25)
    {
        printf("secund class");
    }
    else if (sum<249 && sum>200 && g>25 && s>25 && e>25 &&m>25)
    {
        printf("pass class");
    }
    else if (sum<200 && sum>=100 && g>25 && s>25 && e>25 &&m>25)
    {
        printf("pass");
    }
    else if (sum>400)
    {
        printf("etner velid data");
    }
    else
    {
        printf("file");
    }
    return 0;
}
