#include <stdio.h>

int main() {
    int n,a[100],b[100],c[100];
    int *p=a,*q=b,*r=c;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    for(int i=0;i<n;i++) *(r+i)=*(p+i)+*(q+i);
    for(int i=0;i<n;i++) printf("%d ",c[i]);
    return 0;
}

