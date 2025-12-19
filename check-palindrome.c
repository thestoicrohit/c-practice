#include <stdio.h>

int main() {
    char s[100];
    char *p=s,*q=s;
    scanf("%s",s);
    while(*q) q++;
    q--;
    int f=1;
    while(p<q){
        if(*p!=*q) f=0;
        p++;
        q--;
    }
    printf(f?"palindrome":"not palindrome");
    return 0;
}
