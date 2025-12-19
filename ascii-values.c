#include <stdio.h>

int main() {
    char s[100];
    char *p=s;
    scanf("%s",s);
    while(*p){
        printf("%d ",*p);
        p++;
    }
    return 0;
}
