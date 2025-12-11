#include <stdio.h>

int main() {
    int a,b,t;
    int *p=&a,*q=&b;
    scanf("%d%d",&a,&b);
    t=*p;
    *p=*q;
    *q=t;
    printf("%d %d",a,b);
    return 0;
}
