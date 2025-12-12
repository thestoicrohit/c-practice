#include <stdio.h>

int main() {
    int n,a[100];
    int *p=a,*q;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    q=a+n-1;
    while(p<q){
        int t=*p;
        *p=*q;
        *q=t;
        p++;
        q--;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
