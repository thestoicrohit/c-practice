#include <stdio.h>

void inc(int *p){
    (*p)++;
}

int main() {
    int a;
    scanf("%d",&a);
    inc(&a);
    printf("%d",a);
    return 0;
}
