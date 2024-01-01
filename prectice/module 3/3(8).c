#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h,cm,ca;
    printf("enter height in cm:");
    scanf("%d",&h);
    if (h<=150)
    {
        printf("small");
    }
    else if (h>=150 && h<=180)
    {
        printf("midyem");
    }
    else
    printf("tell");


    return 0;
}
