#include <stdio.h>

int main() {
    int n,c=0;
    int *p=&n;
    scanf("%d",&n);
    while(*p){
        c++;
        *p/=10;
    }
    printf("%d",c);
    return 0;
}
