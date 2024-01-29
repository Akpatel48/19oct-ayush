#include<stdio.h>
int main()
{
    char school[20];
    printf("enter school name");
    scanf("%s",&school);
    printf("abbreviated school name:");
    printf("%c%c",school[0],school[1]);
    return 0;
}
