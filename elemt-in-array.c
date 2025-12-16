#include <stdio.h>

int main() {
    int n,a[100],x,f=0;
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++) if(*(p+i)==x) f=1;
    printf(f?"found":"not found");
    return 0;
}
