#include<stdio.h>
#include<string.h>
int main(){
	char str1[50], worl[50];
	int n, a[50], i, j, k=0, l, f=0, time=0;
	printf("Enter a string :");
	gets(str1);
	printf("Enter a word :");
	gets(worl);
	for(i=0; str1[i]; i++){
		if(str1[i]==' '){
			a[k++]=i;
		}
	}
	a[k++]=i;
	j=0;
	for(i=0; i<k; i++){
		n=a[i]-j;
		if(n==strlen(worl)){
			time=0;
			for(l=0; worl[l]; l++){
				if(str1[l+j]==worl[l]){
					time++;
				}
			}
			if(time==strlen(worl)){
				f++;
			}
		}
		j=a[i]+1;
	}
	printf("total is word = %d",f);
	return 0;
}