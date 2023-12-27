#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a,esum=0,osum=0,e=0,o=0;
        
        for (i = 0; i < 10; i++)
        {
            printf("enter number");
            scanf("%d",&a);
            if ((a%2)==0)
            {
                esum=a+esum;
                e=e+1;
            }
            else
            {
                osum=a+osum;
                o=o+1;
            }

        }
        printf("even sum =%d",esum);
        printf("even %d",e);
        printf("odd aum =%d",osum);
        printf("even %d",o);
}
