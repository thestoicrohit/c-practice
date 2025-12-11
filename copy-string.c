#include <stdio.h>

int main() {
    char a[100],b[100],*p,*q;
    scanf("%s",a);
    p=a;
    q=b;
    while(*p){
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("%s",b);
    return 0;
}
