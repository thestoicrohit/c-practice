#include <stdio.h>

int main() {
    int a,b;
    int *p=&a,*q=&b;
    scanf("%d",&a);
    *q=*p;
    printf("%d",b);
    return 0;
}
