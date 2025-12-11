#include <stdio.h>

int main() {
    int n,a[100],s=0;
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) s+=*(p+i);
    printf("%d",s);
    return 0;
}
