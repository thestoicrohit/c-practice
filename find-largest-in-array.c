#include <stdio.h>

int main() {
    int n,a[100];
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int m=*p;
    for(int i=1;i<n;i++) if(*(p+i)>m) m=*(p+i);
    printf("%d",m);
    return 0;
}
