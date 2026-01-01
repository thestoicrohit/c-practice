#include <stdio.h>

int main() {
    int a;
    int *p=&a;
    scanf("%d",&a);
    printf("%p",(void*)p);
    return 0;
}
