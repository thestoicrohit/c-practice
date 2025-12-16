#include <stdio.h>

int main() {
    char s[100];
    char *p=s,*q;
    scanf("%s",s);
    q=s;
    while(*q) q++;
    q--;
    while(p<q){
        char t=*p;
        *p=*q;
        *q=t;
        p++;
        q--;
    }
    printf("%s",s);
    return 0;
}
