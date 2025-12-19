#include <stdio.h>

int diff(int *a,int *b){
    return *a-*b;
}

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",diff(&x,&y));
    return 0;
}

