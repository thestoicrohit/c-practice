#include <stdio.h>

int main() {
    int n,a[100];
    int *p;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    p=a+n-1;
    for(int i=0;i<n;i++){
        printf("%d ",*p);
        p--;
    }
    return 0;
}

