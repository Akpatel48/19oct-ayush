#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,s;
    printf("enter number");
    scanf("%d",&a);
    for (int i = 1; i <=10; i++)
    {
        s=a*i;
        printf("%d*%d=%d\n",a,i,s   );
    }


    return 0;
}
