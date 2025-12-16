#include <stdio.h>

int main() {
    int n,s=0;
    int *p=&n;
    scanf("%d",&n);
    while(*p){
        s+=(*p)%10;
        *p/=10;
    }
    printf("%d",s);
    return 0;
}
