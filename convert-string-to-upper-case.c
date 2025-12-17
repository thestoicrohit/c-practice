#include <stdio.h>

int main() {
    char s[100];
    char *p=s;
    scanf("%s",s);
    while(*p){
        if(*p>='a' && *p<='z') *p=*p-32;
        p++;
    }
    printf("%s",s);
    return 0;
}
