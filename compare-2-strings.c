#include <stdio.h>

int main() {
    char a[100],b[100];
    char *p=a,*q=b;
    scanf("%s%s",a,b);
    while(*p && *q && *p==*q){
        p++;
        q++;
    }
    if(*p==*q) printf("same");
    else printf("not same");
    return 0;
}
