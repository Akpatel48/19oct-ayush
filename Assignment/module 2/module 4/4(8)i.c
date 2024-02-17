//WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100],str1[100],c;

	printf("enter String: ");
    gets(str);
    str1[100]=str[100];
	int len = strlen(str);

	for (int i = 0, j = len - 1; i <= j; i++, j--) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
    printf("Reversed String: %s", str);
    if (str1==str)
    {
        printf("\nstring is pelindrom");
    }
    else
    {
        printf("\nstring is not pelindrom");
    }



	return 0;
}
