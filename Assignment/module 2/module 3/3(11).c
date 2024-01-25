#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[20];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("enter name:-");
        scanf("%s",name);
        printf("your name:-%s\n\n",name);
    }


    return 0;
}
