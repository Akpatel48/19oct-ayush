//Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
int main(){
	char str[50];
	int i, j;
	printf("Enter string:");
	gets(str);
	for(i=0; str[i] != 0; i++){
		while(!((str[i] >= 'a' && str[i] <= 'z') || 
		(str[i] >= 'A' && str[i] <= 'Z') || str[i] == 0)){
			for(j=i; str[j] != 0; j++){
				str[j] = str[j+1];
			}
			str[j] = 0;
		}
	}
	printf("Remove characters from string:");
	puts(str);
	return 0;
}