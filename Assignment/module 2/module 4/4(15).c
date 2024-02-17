//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int no[100],i=0,j,t,a;
int arr()
{
    printf("enter size of array");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("enter numbmer");
        scanf("%d",&no[i]);
    }
}
int asc()
{
    for (i = 0; i < a; i++)
    {
         for (j = i+1; j < a; j++)
            {
                if (no[i]>no[j])
                {
                    t=no[i];
                    no[i]=no[j];
                    no[j]=t;
                }
            }
    }

    for (i = 0; i<a; i++)
    {
       printf("%d ",no[i]);
    }

}
int main(int argc, char const *argv[])
{

    arr();
    asc();
    return 0;
}
