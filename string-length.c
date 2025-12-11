#include <stdio.h>

int main() {
    char s[100],*p;
    int c=0;
    scanf("%s",s);
    p=s;
    while(*p){
        c++;
        p++;
    }
    printf("%d",c);
    return 0;
}
