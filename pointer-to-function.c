#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int main() {
    int (*p)(int,int)=add;
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",p(x,y));
    return 0;
}
