#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[10],esum=0,osum=0;
        for (i = 0; i < 10; i++)
        {
            printf("enter number");
            scanf("%d",&a[i]);
        }
        for (i = 0; i < 10; i++)
        {
            if ((a[i]%2)==0)
            {
                esum=a[i]+esum;
            }
            else
            {
                osum=a[i]+osum;
            }

        }
        printf("even sum =%d",esum);
        printf("odd aum =%d",osum);
}






