#include <stdio.h>

int main() {
    char s[200];
    char *p=s,*q;
    scanf("%[^\n]",s);
    while(*p){
        q=p;
        while(*q && *q!=' ') q++;
        char *l=p,*r=q-1;
        while(l<r){
            char t=*l;
            *l=*r;
            *r=t;
            l++;
            r--;
        }
        p=q;
        if(*p) p++;
    }
    printf("%s",s);
    return 0;
}
