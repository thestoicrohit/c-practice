#include <stdio.h>

int main() {
    char s[200];
    char *p=s;
    int c=0;
    scanf("%[^\n]",s);
    while(*p){
        if(*p==' ') c++;
        p++;
    }
    printf("%d",c);
    return 0;
}
