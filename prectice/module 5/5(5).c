#include<stdio.h>
int i,j,a[100],s,t;
int dssding()
{
    for (i = 0; i < s; i++)
    {
         for (j = i+1; j < s; j++)
            {
                if (a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
    }
    for (i = s-1; i>=0; i--)
    {
       printf("%d ",a[i]);
    }
}
int assding()
{
    for (i = 0; i < s; i++)
    {
         for (j = i+1; j < s; j++)
            {
                if (a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
    }

    for (i = 0; i<s; i++)
    {
       printf("%d ",a[i]);
    }
}
int main(int argc, char const *argv[])
{
    int ch;
    printf("enter size of array");
    scanf("%d",&s);
    for (i= 0; i < s; i++)
    {
        printf("enter velue ");
        scanf("%d",&a[i]);
    }
    printf("enter chose assnding for 1 or dssnding for 2:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        assding();
        break;
    case 2:
        dssding();
    }
}
