#include <stdio.h>

void sw(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    sw(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
