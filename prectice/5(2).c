#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,m;
    printf("etner number");
    scanf("%d%d",&n1,&n2);
    printf("select 1.add,2.sub,3.mul,4.div,5.mod");
    scanf("%d",&m);
    switch (m)
    {
    case 1:
       printf("add= %d",n1+n2);
        break;
    case 2:
        printf("sub=%d",n1-n2);
        break;
    case 3:
        printf("mul=%d",n1*n2);
    case 4:
        printf("div=%d",n1/n2);
    case 5:
        printf("mod=%d",n1*n2);
    }
    return 0;
}
