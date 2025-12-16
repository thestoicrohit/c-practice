#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *p,s=0;
    scanf("%d",&n);
    p=malloc(n*sizeof(float));
    for(int i=0;i<n;i++) scanf("%f",&p[i]);
    for(int i=0;i<n;i++) s+=p[i];
    printf("%.2f",s/n);
    free(p);
    return 0;
}
