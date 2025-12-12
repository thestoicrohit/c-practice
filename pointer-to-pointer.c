#include <stdio.h>

int main() {
    int a;
    int *p=&a;
    int **q=&p;
    scanf("%d",&a);
    printf("%d",**q);
    return 0;
}
