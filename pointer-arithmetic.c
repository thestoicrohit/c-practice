#include <stdio.h>

int main() {
    int n,a[100];
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) printf("%d ",*(p+i));
    return 0;
}
