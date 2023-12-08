#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c,f;
    printf("enter Fahrenheit");
    scanf("%f",&f);
    c = (5.0 / 9.0) * (f - 32);
    printf("Celsius=%f",c);
    return 0;
}
