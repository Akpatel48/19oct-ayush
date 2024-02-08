#include<stdio.h>
int no;
int fu(int a)
{

        if(a==0)
        {
            return 1;
        }
        return a*fu(a-1);
}

int main(int argc, char const *argv[])
{

     printf("enter number");
        scanf("%d",&no);

/*    for (int i = 1; i <= no; i++)
    {
        a=i*a;
        printf("%d*%d\n",i,a);
    }
    printf("%d",a);
*/


    printf("factorial number=%d",fu(no));
    return 0;
}
