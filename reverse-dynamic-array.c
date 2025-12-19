#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *p,*q;
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&p[i]);
    q=p+n-1;
    int *r=p;
    while(r<q){
        int t=*r;
        *r=*q;
        *q=t;
        r++;
        q--;
    }
    for(int i=0;i<n;i++) printf("%d ",p[i]);
    free(p);
    return 0;
}
