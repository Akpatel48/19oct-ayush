//WAP to show difference between Structure and Union
#include<stdio.h>
struct veryble1{
	int x;
	float y;
};
union veryble2{
	int num;
	float num1;
}ve1;

int main()
{
	struct veryble1 v1;
	printf("enter number of x:");
	scanf("%d",&v1.x);
	printf("enter number of y:");
	scanf("%f",&v1.y);
	printf("\nstructure x and y : %d  %.2f", v1.x, v1.y);
	ve1.num = 5;
	ve1.num1 = 10.4;
	printf("\nno of intiger : %d",ve1.num);
	printf("\nno of float : %.2f",ve1.num1);
	return 0;
}
