#include <stdio.h>

int main() {
    int n,a[100];
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d",*(p+n/2));
    return 0;
}
