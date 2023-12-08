#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,po1,po2,po3;
    printf("enter number:-");
    scanf("%d",&num);
    po1=num;
    po2=num*num;
    po3=num*num*num;
    printf("fist power=%d\n",po1);
    printf("second power=%d\n",po2);
    printf("thierd power=%d",po3);
    return 0;
}
