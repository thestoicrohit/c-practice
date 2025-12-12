#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,*p,s=0;
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&p[i]);
    for(int i=0;i<n;i++) s+=p[i];
    printf("%d",s);
    free(p);
    return 0;
}
