#include<iostream>
class clu
{
    int a,b,c;
    public:
         clu()
        {
            printf("enter number:-");
            scanf("%d%d",&a,&b);
            printf("enter chose 1.add 2.sub 3.mul 4.div:-");
            scanf("%d",&c);
            switch (c)
            {
            case 1:
                printf("sum=%d",a+b);
                break;
            case 2:
                printf("sub=%d",a-b);
                break;
            case 3:
                printf("mul=%d",a*b);
                break;
            case 4:
                printf("div=%d",a/b);
            default:
                printf("enter velid chose");
                break;
            }
        }
};

int main(int argc, char const *argv[])
{
    clu c;
    return 0;
}
