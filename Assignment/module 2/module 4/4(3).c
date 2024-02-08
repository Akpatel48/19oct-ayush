#include <stdio.h>
char temp;
void revStr(char ch[], int s, int e) {
    if (s >= e) {
        return;
    }
    temp = ch[s];
    ch[s] = ch[e];
    ch[e] = temp;
    revStr(ch, s + 1, e - 1);
}
int main() {
    char Str[100];
    printf("enter string:-");
    scanf("%s", Str);

    int l = 0;
    while (Str[l] != 0) {
        l++;
    }
    revStr(Str, 0, l - 1);
    printf("reverse string:-%s",Str);
    return 0;
}
