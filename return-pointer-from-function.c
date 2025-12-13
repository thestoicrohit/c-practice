#include <stdio.h>

int* big(int *a,int *b){
    if(*a>*b) return a;
    return b;
}

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    int *p=big(&x,&y);
    printf("%d",*p);
    return 0;
}
