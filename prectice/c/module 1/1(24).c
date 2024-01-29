#include<stdio.h>
int main(int argc, char const *argv[])
{
    char em1[20],em2[20],em3[20],em4[20],em5[20];
    int  ems1,ems2,ems3,ems4,ems5,av,to;
    printf("enter employe name:-");
    scanf("%s",&em1);
    printf("enter employe salary:-");
    scanf("%d",&ems1);
    printf("enter employe name:-");
    scanf("%s",&em2);
    printf("enter employe salary:-");
    scanf("%d",&ems2);
    printf("enter employe name:-");
    scanf("%s",&em3);
    printf("enter employe salary:-");
    scanf("%d",&ems3);
    printf("enter employe name:-");
    scanf("%s",&em4);
    printf("enter employe salary:-");
    scanf("%d",&ems4);
    printf("enter employe name:-");
    scanf("%s",&em5);
    printf("enter employe salary:-");
    scanf("%d",&ems5);
    to=ems1+ems2+ems3+ems4+ems5;
    av=to/5;
    printf("average salary=%d",av);
    printf("\n total salary=%d",to);
    return 0;
}
