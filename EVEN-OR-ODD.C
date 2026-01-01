#include <stdio.h>

int main() {
    int n;
    int *p=&n;
    scanf("%d",&n);
    if(*p%2==0) printf("even");
    else printf("odd");
    return 0;
}
